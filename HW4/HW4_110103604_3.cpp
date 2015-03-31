/*
 * HW4_110103604_3.cpp
 * Copyright (C) <matheusdalmago10@hotmail.com>
 *
 * Distributed under terms of the MIT license.
 *
 * Created: 2015-03-01
 *      by: Matheus Dal Mago
 *      SBU ID: 110103604
 *
 * Description: The program calculates the number of
 *  acres forested in a certain period, using an
 *  initial amount of acres and a reforestation rate.
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv){

    double acres(2500);
    int i;
    double rate(0.02);

    cout << "Initial uncut amount: " << acres << endl;
    cout << " Year   Acres" << endl;
    cout << "-------------" << endl;

    for (i=1; i<=20; i++){
        acres = acres + rate*acres;
        cout << "   " << i << "   |   " << acres << endl;

    }

    return (EXIT_SUCCESS);
}
