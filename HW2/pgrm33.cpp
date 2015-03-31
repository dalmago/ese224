/*
 * pgrm33.cpp
 * Copyright (C) <matheusdalmago10@hotmail.com>
 *
 * Distributed under terms of the MIT license.
 *
 * Created: 2015-02-17
 *      by: Matheus Dal Mago
 *      SBU ID: 110103604
 *
 * Homework 2
 * Chapter 2 - program 33
 *
 * Description: Calculates the area of an elipse
 *  from its radius.
 */

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv){

    double a, b;
    double area;

    cout << "Type the semiaxes a and b of the elipse: ";

    cin >> a >> b;

    area = a * b * M_PI;
    cout << "The area of the elipse is: " << area << endl;

    return (EXIT_SUCCESS);
}
