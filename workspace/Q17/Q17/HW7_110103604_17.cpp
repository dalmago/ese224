//
//  main.cpp
//  Q17
//
//  Created by Matheus Dal Mago on 4/14/15.
//  Copyright (c) 2015 Matheus Dal Mago. All rights reserved.
//

#include <iostream>
#include <fstream>

#define QT 17

using namespace std;

void reorder(double x[], double y[], int num_pts);

int main(int argc, const char * argv[]) {

    double x[QT], y[QT];
    
    ifstream file("TUNNEL.dat");
    
    if (file.fail()){
        cerr << "Error opening file" << endl;
        exit(1);
    }
    
    for (int i=0; i<QT; i++){
        file >> x[i] >> y[i];
    }
    
    for (int i=0; i<QT; i++){
        cout << x[i] << " " << y[i] << endl;
    }
    
    cout << "\nordering\n" << endl;
    reorder(x, y, QT);
    
    for (int i=0; i<QT; i++){
        cout << x[i] << " " << y[i] << endl;
    }
    
    return 0;
}

void reorder(double x[], double y[], int num_pts){

    int index;
    double temp;
    
    for (int i=0; i<num_pts; i++){
        index = i;
        for (int j=i+1; j<num_pts; j++){
            if (x[j] < x[index]) index = j;
        }
        
        temp = x[i];
        x[i] = x[index];
        x[index] = temp;
        
        temp = y[i];
        y[i] = y[index];
        y[index] = temp;
    }
}