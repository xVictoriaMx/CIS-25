#include <iostream>
#include "MovieParser.hpp"

using namespace std;
using namespace movie;

int main() {
    string movieData = "24 s2,2014";
    Movie movie = parseMovieString(movieData);

    cout << "Title: " << movie.title << endl;
    cout << "Release Year: " << movie.releaseYear << endl;

    return 0;
}
