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
	{0,154,0,179,255,255},
	{68, 72, 156, 102, 126, 255}, 
	{124, 48, 117, 143, 170, 255} };

vector<Scalar> defaultColorVals{ {0,0,255}, {0,255,0}, {255, 0, 255} };

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

vector<vector<int>> findColor(Mat img) {
	Mat imgHSV;
	cvtColor(img, imgHSV, COLOR_BGR2HSV);

	for (int i = 0; i < colors.size(); i++) {
		Scalar lower(colors[i][0], colors[i][1], colors[i][2]);
		Scalar upper(colors[i][3], colors[i][4], colors[i][5]);
		Mat mask;
		inRange(imgHSV, lower, upper, mask);
		Point fixedPoint = getContours(mask);

		if (fixedPoint.x != 0 && fixedPoint.y != 0) {
			upPoints.push_back({ fixedPoint.x, fixedPoint.y,i });
		}
	}
	return upPoints;
}

// Display ink on Canvas

void drawOnCanvas(vector<vector<int>> upPoints, vector<Scalar> defaultColorVals) {
	for (int i = 1; i < upPoints.size(); i++) {
		Point prevPoint(upPoints[i - 1][0], upPoints[i - 1][1]);
		Point currPoint(upPoints[i][0], upPoints[i][1]);

		if (upPoints[i][2] == upPoints[i - 1][2]) {
			line(img, prevPoint, currPoint, defaultColorVals[upPoints[i][2]], 5);
		}
	}
}

int main() {
	VideoCapture cap(0);

	while (true) {
		cap.read(img);
		flip(img, img, 1);

		upPoints = findColor(img);
		drawOnCanvas(upPoints, defaultColorVals);

		imshow("Image", img);
		waitKey(1);
	}
	return 0;
}

int main() {
    int choice;
    cout << "Choose an option: " << endl;
    cout << "1: Use Webcam" << endl;
    cout << "2: Use White Canvas" << endl;
    cin >> choice;

    if (choice == 1) {
        // Option 1: Webcam
        VideoCapture cap(0);

        if (!cap.isOpened()) {
            cout << "Error: Webcam not detected." << endl;
            return -1;
        }

        while (true) {
            cap.read(img);
            flip(img, img, 1);  // Flip the image horizontally for a mirror view

            newPoints = findColor(img);
            drawOnCanvas(newPoints, myColorVals);

            imshow("Image", img);
            if (waitKey(1) == 27) break;  // Exit on 'ESC' key
        }
    }
    else if (choice == 2) {
        // Option 2: White Canvas
        img = Mat::zeros(480, 640, CV_8UC3);  // Create a white canvas (480x640)
        img.setTo(Scalar(255, 255, 255));     // Set the background to white

        while (true) {
            newPoints = findColor(img);        // Detect the points in the image
            drawOnCanvas(newPoints, myColorVals);  // Draw on the white canvas

            imshow("White Canvas", img);
            if (waitKey(1) == 27) break;  // Exit on 'ESC' key
        }
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}