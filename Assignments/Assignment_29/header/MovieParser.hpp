#ifndef MOVIEPARSER_H
#define MOVIEPARSER_H

#include "Movie.hpp"
#include <string>

using namespace std;

namespace movie {
	Movie parseMovieString(const string& movieString);
}

#endif 
