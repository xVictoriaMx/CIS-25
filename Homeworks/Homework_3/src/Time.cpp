#include "Time.hpp"


using namespace std;



Time::Time(int hour, int minute, int second) : hour(hour), minute(minute), second(second) {}

int Time::getHour() const { return hour; }
int Time::getMinute() const { return minute; }
int Time::getSecond() const { return second; }

void Time::addSeconds(int seconds) {
    this->second += seconds;
    while (this->second >= 60) {
        this->second -= 60;
        addMinutes(1);
    }
}

void Time::addMinutes(int minutes) {
    this->minute += minutes;
    while (this->minute >= 60) {
        this->minute -= 60;
        addHours(1);
    }
}

void Time::addHours(int hours) {
    this->hour += hours;
    while (this->hour >= 24) {
        this->hour -= 24;
    }
}

