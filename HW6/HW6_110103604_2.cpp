/*
 * HW6_110103604_2.cpp
 * Copyright (C) <matheusdalmago10@hotmail.com>
 *
 * Distributed under terms of the MIT license.
 *
 * Created: 2015-04-06
 *      by: Matheus Dal Mago
 *
 * Description:
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv){

    int rolls;
    int dice1, dice2;
    int sumEight = 0;

    srand (time(NULL));

    cout << "Please type the number of rolls of the dice: ";
    cin >> rolls;

    for (int i=1; i<=rolls; i++){
        dice1 = rand()%6 + 1;
        dice2 = rand()%6 + 1;

        if (dice1 + dice2 == 8) sumEight++;

        cout << "Roll " << i << ":" << endl;
        cout << dice1 << "  " << dice2 << endl;
    }

    cout << endl << "Percentage: " << ((double)(sumEight))/rolls*100 << "%";
    cout << endl;

    return (EXIT_SUCCESS);
}
