/*
 * HW5_110103604_2.cpp
 * Copyright (C) <matheusdalmago10@hotmail.com>
 *
 * Distributed under terms of the MIT license.
 *
 * ESE 224
 * Homework 5
 * Exercise 20
 *
 * Created: 2015-04-01
 *      by: Matheus Dal Mago
 *      SBU ID: 110103604
 *
 * Compiled in: GCC 4.9.1
 * Tested in: Unix and MAC OS X
 *
 * Description: The program reads a text file which
 * contains, on its first line, the number of lines
 * that follows. In the lines below, there are 4
 * columns, being respectively time, altitude, velocity
 * and acceleration. This program defines at which 00:38
 * the altitude starts to decrease (or say, if never).
 * The last 2 columns are ignored.
 *
 */

#include <iostream>
#include <cstdlib>
#include <fstream>

#define FILENAME "ROCKET1.dat"

using namespace std;

int main(int argc, char** argv){

    int lines;
    long double time, altitude, velocity, acceleration;
    long double k(0);

    ifstream rocket(FILENAME);
    if (rocket.fail()){
        cerr << "Fail opening file: " << FILENAME << endl;
        exit(1);
    }

    rocket >> lines;

    for (int i=1; i<=lines; i++){
        rocket >> time;
        rocket >> altitude;
        rocket >> velocity;
        rocket >> acceleration;

        if (altitude < k){
            cout << "The rocket starts to fall back at the time: " << time;
            cout << "s" << endl;
            break;
        }

        k = altitude;

        if (rocket.eof() || i == lines){
            cout << "The rocket never falls back" << endl;
        }
    }

    return (EXIT_SUCCESS);
}
