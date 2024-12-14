#include <iostream>

// Date Class
class Date {
protected:
    int year, month, day;

public:
    // Constructor
    Date(int year, int month, int day) : year(year), month(month), day(day) {}

    // Getter methods
    int getYear() const {
        return year;
    }

    int getMonth() const {
        return month;
    }

    int getDay() const {
        return day;
    }

    // Virtual method for polymorphism
    virtual void display() const {
        std::cout << "Date: " << year << "-" << month << "-" << day << std::endl;
    }
};

// Time Class
class Time {
protected:
    int hour, minute, second;

public:
    // Constructor
    Time(int hour, int minute, int second) : hour(hour), minute(minute), second(second) {}

    // Getter methods
    int getHour() const {
        return hour;
    }

    int getMinute() const {
        return minute;
    }

    int getSecond() const {
        return second;
    }

    // Virtual method for polymorphism
    virtual void display() const {
        std::cout << "Time: " << hour << ":" << minute << ":" << second << std::endl;
    }
};

// DateTime Class (Child of Date and Time)
class DateTime : public Date, public Time {
public:
    // Constructor
    DateTime(int year, int month, int day, int hour, int minute, int second)
        : Date(year, month, day), Time(hour, minute, second) {}

    // Overriding display to show both date and time
    void display() const override {
        std::cout << "DateTime: " << year << "-" << month << "-" << day << " "
                  << hour << ":" << minute << ":" << second << std::endl;
    }
};

int main() {
    // Creating objects
    Date date(2024, 12, 2);
    Time time(14, 30, 45);
    DateTime dateTime(2024, 12, 2, 14, 30, 45);

    // Displaying information
    date.display();         // Displays date
    time.display();         // Displays time
    dateTime.display();     // Displays date and time

    // Accessing individual fields
    std::cout << "Year: " << dateTime.getYear() << std::endl;
    std::cout << "Hour: " << dateTime.getHour() << std::endl;

    return 0;
}
