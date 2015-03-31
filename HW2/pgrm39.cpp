/*
 * pgrm39.cpp
 * Copyright (C) <matheusdalmago10@hotmail.com>
 *
 * Distributed under terms of the MIT license.
 *
 * Created: 2015-02-17
 *      by: Matheus Dal Mago
 *      SBU ID: 110103604
 *
 * Description: Read the amount of each element of an
 *  amino acid and calculate its molecular weight.
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv){

    int oxygen, carbon, nitrogen, sulfur, hydrogen;
    double weight;

    cout << "For an amino acid, type the number of atoms of each following elements:" << endl;

    cout << "Oxygen: ";
    cin >> oxygen;

    cout << endl << "Carbon: ";
    cin >> carbon;

    cout << endl << "Nitrogen: ";
    cin >> nitrogen;

    cout << endl << "Sulfur: ";
    cin >> sulfur;

    cout << endl << "Hydrogen: ";
    cin >> hydrogen;

    cout << endl << "The molecular weight for this amino acid is: ";

    weight = (oxygen*15.9994) + (carbon*12.011) + (nitrogen*14.00674) + (sulfur*32.066) + (hydrogen*1.00794);

    cout << weight << endl;

    return (EXIT_SUCCESS);
}
