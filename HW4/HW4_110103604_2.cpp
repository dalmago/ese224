/*
 * HW4_110103604_2.cpp
 * Copyright (C) <matheusdalmago10@hotmail.com>
 *
 * Distributed under terms of the MIT license.
 *
 * Created: 2015-03-01
 *      by: Matheus Dal Mago
 *      SBU ID: 110103604
 *
 * Description: The program prints a table of conversion
 *  from pesos to dollars. 25 lines are printed, starting
 *  from 5 pesos and incrementing by 5 each line. The
 *  following currency conversion is used: 1 dollar = 9.02
 *  pesos.
 */

#include <iostream>

using namespace std;

double pesosToDollars(double pesos){
    double dollars;

    dollars = pesos*9.02;

    return (dollars);
}

int main(int argc, char** argv){
    int i;

    cout << "Conversion table:" << endl;
    cout << "  pesos   dollars"<< endl;
    cout << "-----------------"<< endl;

    for (int i = 1; i <= 25; i++){
        cout << "    " << i*5 << "   |   " << pesosToDollars(i*5) << endl;

    }

    return (EXIT_SUCCESS);
}
