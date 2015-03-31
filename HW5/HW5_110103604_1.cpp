/*
 * HW5_110103604_1.cpp
 * Copyright (C) <matheusdalmago10@hotmail.com>
 *
 * Distributed under terms of the MIT license.
 *
 * ESE 224
 * Homework 5
 * Exercise 15
 *
 * Created: 2015-03-31
 *      by: Matheus Dal Mago
 *      SBU ID: 110103604
 *
 * Compiled in: GCC 4.9.1
 * Tested in: Unix and MAC OS X
 *
 * Description:
 */

#include <iostream>
#include <cstdlib>
#include <fstream>

#define FILENAME "NUMBERS.dat"

using namespace std;

int main(int argc, char** argv){

    ifstream numbers(FILENAME);
    if (numbers.fail()){
        cerr << "Fail opening file: " << FILENAME << endl;
        exit(1);
    }



    return (EXIT_SUCCESS);
}
