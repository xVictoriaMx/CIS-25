#ifndef DATE_HPP
#define DATE_HPP

class Date {
private:
    int year, month, day;
public:
    Date(int year, int month, int day);

    int getYear() const;
    int getMonth() const;
    int getDay() const;

    void addDays(int days);
    void addMonths(int months);
    void addYears(int years);
};

#endif
