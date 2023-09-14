#ifndef DATE_H
#define DATE_H

#include <iostream>


class Date
{
    public:
        Date();
        virtual ~Date();

        void inputDate();

    private:
        int day;
        int month;
        int year;
};

#endif // DATE_H
