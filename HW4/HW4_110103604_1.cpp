/*
 * HW4_110103604_1.cpp
 * Copyright (C) <matheusdalmago10@hotmail.com>
 *
 * Distributed under terms of the MIT license.
 *
 * Created: 2015-03-01
 *      by: Matheus Dal Mago
 *      SBU ID: 110103604
 *
 * Description: The program generates a table of conversion
 *  from mph to ft/s. It starts from 0mph and goes up to 65
 *  mph. The following conversion is used: 1 mi = 5,280 ft.
 */

#include <iostream>

using namespace std;

double mphToFts(double mph){
    double fts;

    fts = mph * 5280 / 3600;

    return (fts);
}

int main(int argc, char** argv){
    int i;

    cout << "Conversion table:" << endl;
    cout << "  mph   ft/s "<< endl;
    cout << "-------------"<< endl;

    for (int i = 0; i <= 65; i+=5){
        cout << "   " << i << "  |  " << mphToFts(i) << endl;

    }

    return (EXIT_SUCCESS);
}
