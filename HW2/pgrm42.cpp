/*
 * pgrm42.cpp
 * Copyright (C) <matheusdalmago10@hotmail.com>
 *
 * Distributed under terms of the MIT license.
 *
 * Created: 2015-02-17
 *      by: Matheus Dal Mago
 *      SBU ID: 110103604
 *
 * Description: Calculate the logarithm of
 *  the entered number to the base 8.
 */

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv){

    int num;
    double ans;

    cout << "Type a positive number to be calculated: ";
    cin >> num;

    while (num <= 0){
        cout << "Invalid number, please type again: ";
        cin >> num;
    }

    ans = log(num) / log(8);

    cout << "The logarithm of " << num << " to the base 8 is: " << ans << endl;

    return (EXIT_SUCCESS);
}
