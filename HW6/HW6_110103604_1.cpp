/*
 * HW6_110103604_1.cpp
 * Copyright (C) <matheusdalmago10@hotmail.com>
 *
 * Distributed under terms of the MIT license.
 *
 * ESE 224
 * Homework 6
 * Exercise 19
 *
 * Created: 2015-04-06
 *      by: Matheus Dal Mago
 *      SBU ID: 110103604
 *
 * Compiled in: GCC 4.9.1
 * Tested in: Unix and MAC OS X
 *
 * Description: The following function detects and prints to a specified
 * output file the first n prime numbers. The output file must be valid and
 * defined.
 *
 * Parameters:
 *      (int) n - number of prime numbers to be calculated
 *      (ostream &) file - the file where the results will be printed
 */

void primeGen(int n, ostream& file){
    int primeCnt = 0;

    for (int j=2; primeCnt<n; j++){
        int divisible = 0;
        for (int i=1; i<=j; i++){
            if (j%i == 0) divisible++;

            if (divisible > 2) break; // already not prime
        }
        if (divisible == 2){
            file << j << endl;
            primeCnt++;
        }
    }
}
