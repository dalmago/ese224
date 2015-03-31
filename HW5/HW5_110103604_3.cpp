/*
 * HW5_110103604.cpp
 * Copyright (C) <matheusdalmago10@hotmail.com>
 *
 * Distributed under terms of the MIT license.
 *
 * ESE 224
 * Homework 5
 * Exercise 35
 *
 * Created: 2015-03-30
 *      by: Matheus Dal Mago
 *      SBU ID: 110103604
 *
 * Compiled in: GCC 4.9.1
 * Tested in: Unix and MAC OS X
 *
 * Description: This program opens a file which contains critical path
 * information, reads all the data on it and outputs, in an organized
 * table, the maximum number of days for a task within each event and
 * the total number of days for the project conclusion.
 */

#include <iostream>
#include <cstdlib>
#include <fstream>

#define FILENAME "PATH.dat"

using namespace std;

int main(int argc, char** argv){

    int event, task, nDays;
    int i, j;
    int maxDays, projct(0);

    ifstream path(FILENAME);
    if (path.fail()){
        cerr << "Fail opening file: " << FILENAME << endl;
        exit(1);
    }

    cout << "\nEvent  Task  Max Days" << endl;

    path >> event;
    path >> task;
    path >> nDays;

    while (! path.eof()){

        /*
         * Auxiliary variable used to notice when
         * the read event is different from the
         * last one.
         */
        i = event;

        j = task;
        maxDays = nDays;

        while (i == event && !path.eof()){
            if (nDays > maxDays){
                maxDays = nDays;
                j = task;
            }

            path >> event;
            path >> task;
            path >> nDays;
        }
        projct += maxDays;
        cout << "  " << i << "      " << j << "     " <<  maxDays << endl;
    }

    cout << "\nDays for the project completion: " << projct << endl;

    path.close();

    return (EXIT_SUCCESS);
}
