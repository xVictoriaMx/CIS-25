#include "MovieParser.hpp"
#include <sstream>

using namespace std;

namespace movie {

    Movie parseMovieString(const string& movieString) {
        Movie movie;
        stringstream ss(movieString);
        getline(ss, movie.title, ',');
        ss >> movie.releaseYear;
        return movie;
    }
}