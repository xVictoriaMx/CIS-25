#include "Date.hpp"

using namespace std;


Date::Date(int year, int month, int day) : year(year), month(month), day(day) {}

int Date::getYear() const { return year; }
int Date::getMonth() const { return month; }
int Date::getDay() const { return day; }

void Date::addDays(int days) {
    day += days;
    while (day > 30) {
        day -= 30;
        addMonths(1);
    }
}

void Date::addMonths(int months) {
    month += months;
    while (month > 12) {
        month -= 12;
        addYears(1);
    }
}

void Date::addYears(int years) {
    year += years;
}

