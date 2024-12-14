#include "DateTime.hpp"
#include <sstream>

using namespace std;

DateTime::DateTime(int year, int month, int day, int hour, int minute, int second)
    : date(year, month, day), time(hour, minute, second) {}

void DateTime::addDays(int days) {
    date.addDays(days);
}

void DateTime::addMonths(int months) {
    date.addMonths(months);
}

void DateTime::addYears(int years) {
    date.addYears(years);
}

void DateTime::addHours(int hours) {
    time.addHours(hours);
}

void DateTime::addMinutes(int minutes) {
    time.addMinutes(minutes);
}

void DateTime::addSeconds(int seconds) {
    time.addSeconds(seconds);
}

std::string DateTime::format(const std::string& formatString) const {
    std::ostringstream result;
    for (size_t i = 0; i < formatString.size(); ++i) {
        if (formatString.substr(i, 4) == "YYYY") {
            result << date.getYear();
            i += 3; 
        }
        else if (formatString.substr(i, 2) == "MM") {
            result << (date.getMonth() < 10 ? "0" : "") << date.getMonth(); 
            i += 1; 
        }
        else if (formatString.substr(i, 2) == "DD") {
            result << (date.getDay() < 10 ? "0" : "") << date.getDay();
            i += 1; 
        }
        else if (formatString.substr(i, 2) == "HH") {
            result << (time.getHour() < 10 ? "0" : "") << time.getHour(); 
            i += 1; 
        }
        else if (formatString.substr(i, 2) == "mm") {
            result << (time.getMinute() < 10 ? "0" : "") << time.getMinute(); 
            i += 1; 
        else if (formatString.substr(i, 2) == "SS") {
            result << (time.getSecond() < 10 ? "0" : "") << time.getSecond(); 
            i += 1; 
        }
        else {
            result << formatString[i];
        }
    }
    return result.str();
}

void DateTime::difference(const DateTime& dt1, const DateTime& dt2, int& days, int& hours, int& minutes, int& seconds) {
    days = dt2.date.getDay() - dt1.date.getDay();
    hours = dt2.time.getHour() - dt1.time.getHour();
    minutes = dt2.time.getMinute() - dt1.time.getMinute();
    seconds = dt2.time.getSecond() - dt1.time.getSecond();

    if (seconds < 0) { seconds += 60; minutes--; }
    if (minutes < 0) { minutes += 60; hours--; }
    if (hours < 0) { hours += 24; days--; }
}

