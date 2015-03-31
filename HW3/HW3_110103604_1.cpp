/*
 * HW3_110103604_1.cpp
 * Copyright (C) <matheusdalmago10@hotmail.com>
 *
 * Distributed under terms of the MIT license.
 *
 * Created: 2015-02-23
 *      by: Matheus Dal Mago
 *      SBU ID: 110103604
 *
 * Description: The program receives 3 boolean inputs (0 or 1)
 *  a, b and c from the user and it evaluates the following
 *  expression: !(a || b) && c
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv){

    int a, b, c;
    bool a_bool, b_bool, c_bool;

    cout << "Please enter three boolean variables [0/1]: ";

    cin >> a >> b >> c;

    while (a != 0 && a != 1){
        cout << "First value invalid, it should be 0 or 1\n";
        cout << "Please enter the value again: ";
        cin >> a;
    }

    while (b != 0 && b != 1){
        cout << "Second value invalid, it should be 0 or 1\n";
        cout << "Please enter the value again: ";
        cin >> b;
    }

    while (c != 0 && c != 1){
        cout << "Third value invalid, it should be 0 or 1\n";
        cout << "Please enter the value again: ";
        cin >> c;
    }

    cout << boolalpha;

    a_bool = a;
    b_bool = b;
    c_bool = c;

    cout << "! (" << a_bool << " || " << b_bool << ") && " << c_bool << endl;

    if (! (a || b) && c)
        cout << "is true" << endl;
    else {
        cout << "is false" << endl;
    }

    return (EXIT_SUCCESS);
}
