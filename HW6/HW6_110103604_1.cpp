/*
 * HW6_110103604_1.cpp
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

using namespace std;

void primeGen(int n, ostream& file);

int main(int argc, char** argv){

    primeGen(25, cout);

    return (EXIT_SUCCESS);
}

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
