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
 * Description: The program reads a file containing
 * integer and floating-point values separated by
 * commas, which may or may not be followed by additional
 * whitespace, and generates a new file containing
 * just the values separated by spaces.
 *
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
            if (c == '\n' && s == ""){
                output << endl;
            }
            if (s == "") continue;

            if (s.find('.') == -1){
                i = std::atoi(s.c_str());
                output << i << " ";
            } else{

                j = std::atof(s.c_str());
                output << j << " ";
            }
            s = "";
            if (c == '\n') output << endl;
        }
        else if (c != ' '){  // Ignores white spaces
            s += c;
        }
    }

    input.close();
    output.close();

    return (EXIT_SUCCESS);
}
