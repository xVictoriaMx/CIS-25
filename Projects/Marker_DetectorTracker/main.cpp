#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

Mat img;
vector<vector<int>> upPoints;

// Values for default colors

vector<vector<int>> colors{
	{0,109,0,91,255,255},
	{68, 72, 156, 102, 126, 255}, 
	{124, 48, 117, 143, 170, 255} };

vector<Scalar> defaultColorVals{ {255,0,255}, {0,255,0}, {0, 0, 255} };

// Get outliine of Marker, as well as drawing point

Point getContours(Mat imgDilation) {

	vector<vector<Point>> contours;
	vector<Vec4i> hierarchy;
	string objectType;


	findContours(imgDilation, contours, hierarchy, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);
	vector<vector<Point>> conPoly(contours.size());
	vector<Rect> boundRect(contours.size());

	Point fixedPoint(0, 0);

	for (int i = 0; i < contours.size(); i++) {
		int area = contourArea(contours[i]);
		cout << area << endl;


		if (area > 1000) {
			float perimeter = arcLength(contours[i], true);
			approxPolyDP(contours[i], conPoly[i], 0.02 * perimeter, true);

			drawContours(img, conPoly, i, Scalar(255, 0, 255), 2);
			cout << conPoly[i].size() << endl;


			int objCor = (int)conPoly[i].size();

			boundRect[i] = boundingRect(conPoly[i]);

			fixedPoint.x = boundRect[i].x + boundRect[i].width / 2;
			fixedPoint.y = boundRect[i].y;

			rectangle(img, boundRect[i].tl(), boundRect[i].br(), Scalar(0, 255, 0), 2);
		}
	}
	return fixedPoint;
}

// Figure out what color the marker is

vector<vector<int>> findColor(Mat img);

// Display ink on Canvas

void drawOnCanvas();

int main() {
	VideoCapture cap(0);

	while (true) {
		cap.read(img);
		upPoints = findColor(img);
		drawOnCanvas(upPoints, defaultColorVals);

		imshow("Image", img);
		waitKey(1);
	}
	return 0;
}