//
//  Date.h
//  Q39
//
//  Created by Matheus Dal Mago on 4/14/15.
//  Copyright (c) 2015 Matheus Dal Mago. All rights reserved.
//

#ifndef __Date__h
#define __Date__h

#include <iostream>
#include <string>

class Date{
private:
    int month;
    int day;
    int year;
public:
    Date(int month, int day, int year);
    void setDate(int month, int day, int year);
    void setMonth(int month);
    void setDay(int day);
    void setYear(int year);
    std::string getDate();
    int getMonth()const;
    int getDay()const;
    int getYear()const;
    void printNumber() const;
    void printLetter() const;
};

#endif /* defined(__Date__h) */
