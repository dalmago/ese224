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
#include <string>

#define INPUTFILE "NUMBERS.dat"
#define OUTPUTFILE "NUMBERS_OUT.dat"

using namespace std;

int main(int argc, char** argv){
    string s = "";
    char c;
    int i;
    double j;

    ifstream input(INPUTFILE);
    if (input.fail()){
        cerr << "Fail opening file: " << INPUTFILE << endl;
        exit(1);
    }

    ofstream output(OUTPUTFILE);
    if (output.fail()){
        cerr << "Fail opening file: " << OUTPUTFILE << endl;
        exit(1);
    }

    while ((c = input.get()) != EOF){
        if ((c == ',' || c == '\n')){
            if (s == "") continue;

            if (s.find('.') == -1){
                i = std::atoi(s.c_str());
                output << i << " ";
            } else{

                j = std::atof(s.c_str());
                output << j << " ";
            }
            s = "";
        }
        else if (c != ' '){
            s += c;
        }
    }

    input.close();
    output.close();

    return (EXIT_SUCCESS);
}
