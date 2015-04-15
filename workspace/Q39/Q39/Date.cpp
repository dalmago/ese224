//
//  Date.cpp
//  Q39
//
//  Created by Matheus Dal Mago on 4/14/15.
//  Copyright (c) 2015 Matheus Dal Mago. All rights reserved.
//

#include "Date.h"

Date::Date(int month, int day, int year){
    (*this).month = month;
    (*this).day = day;
    (*this).year = year;
}

void Date::setDate(int month, int day, int year){
    (*this).month = month;
    (*this).day = day;
    (*this).year = year;
}

void Date::setMonth(int month){
    (*this).month = month;
}

void Date::setDay(int day){
    (*this).day = day;
}

void Date::setYear(int year){
    (*this).year = year;
}

std::string Date::getDate(){
    std::string s = "";
    
    s += (std::to_string(month) + "/" + std::to_string(day) + "/" + std::to_string(year));
    
    return s;
}

int Date::getMonth()const{
    return month;
}

int Date::getDay()const{
    return day;
}

int Date::getYear()const{
    return year;
}

void Date::printNumber () const{
    std::cout << month << "/" << day << "/" << year << std::endl;
}

void Date::printLetter() const{
    static const std::string months[] = {"January", "February", "March", "April",
        "May", "June", "July", "August", "September", "October", "Noveber",
        "December"};
    
    std::cout << months[month] << " " << day << ", " << year << std::endl;
}

