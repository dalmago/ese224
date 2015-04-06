/*
 * HW6_110103604_2.cpp
 * Copyright (C) <matheusdalmago10@hotmail.com>
 *
 * Distributed under terms of the MIT license.
 *
 * ESE 224
 * Homework 6
 * Exercise 26
 *
 * Created: 2015-04-06
 *      by: Matheus Dal Mago
 *      SBU ID: 110103604
 *
 * Compiled in: GCC 4.9.1
 * Tested in: Unic and MAC OS X
 *
 * Description: This program simulates the rolls of two six-sided "fair"
 * dices. The user decides how many times the dices will be rolled. At the
 * end of the simulation, the program calculates and prints the percentage
 * of time that the sum of the dots on the dices were equal to eight.
 *
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv){

    int rolls;
    int dice1, dice2;
    int sumEight = 0;

    /*
     * Uses the Epoch time to generate a new seed each time
     * the program is executed. This make sure that the dice
     * is fair.
     */
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
