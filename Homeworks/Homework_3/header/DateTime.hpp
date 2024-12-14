#ifndef DATETIME_HPP
#define DATETIME_HPP

#include "Date.hpp"
#include "Time.hpp"
#include <string>

class DateTime {
private:
    Date date;
    Time time;
public:
    DateTime(int year, int month, int day, int hour, int minute, int second);

    void addDays(int days);
    void addMonths(int months);
    void addYears(int years);
    void addHours(int hours);
    void addMinutes(int minutes);
    void addSeconds(int seconds);

    std::string format(const std::string& formatString) const;

    static void difference(const DateTime& dt1, const DateTime& dt2, int& days, int& hours, int& minutes, int& seconds);
};

#endif
