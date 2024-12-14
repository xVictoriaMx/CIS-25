#ifndef TIME_HPP
#define TIME_HPP

class Time {
private:
    int hour, minute, second;
public:
    Time(int hour, int minute, int second);

    int getHour() const;
    int getMinute() const;
    int getSecond() const;

    void addSeconds(int seconds);
    void addMinutes(int minutes);
    void addHours(int hours);
};

#endif
