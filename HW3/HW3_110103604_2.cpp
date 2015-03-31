/*
 * HW3_110103604_2.cpp
 * Copyright (C) <matheusdalmago10@hotmail.com>
 *
 * Distributed under terms of the MIT license.
 *
 * Created: 2015-02-24
 *      by: Matheus Dal Mago
 *      SBU ID: 110103604
 *
 * Description: The program receives the length and width
 *  of 3 rectangles and print them in descending order of
 *  area size.
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv){

    double length1, length2, length3, width1, width2, width3, area1, area2, area3;

    cout << "Enter, respectively, the length and width of the first rectangle: ";
    cin >> length1 >> width1;
    area1 = length1 * width1;

    cout << "Now, enter the length and width of the second rectangle: ";
    cin >> length2 >> width2;
    area2 = length2 * width2;

    cout << "Type the length and width of the third rectangle: ";
    cin >> length3 >> width3;
    area3 = length3* width3;

    if (area1 > area2 && area1 > area3){
        cout << "Rectangle 1 has area: " << area1 << endl;
        if (area2 > area3){
            cout << "Rectangle 2 has area: " << area2 << endl;
            cout << "Rectangle 3 has area: " << area3 << endl;
        } else{
            cout << "Rectangle 3 has area: " << area3 << endl;
            cout << "Rectangle 2 has area: " << area2 << endl;
        }
    } else if (area2 > area3){
        cout << "Rectangle 2 has area: " << area2 << endl;
        if (area1 > area3){
            cout << "Rectangle 1 has area: " << area1 << endl;
            cout << "Rectangle 3 has area: " << area3 << endl;
        } else {
            cout << "Rectangle 3 has area: " << area3 << endl;
            cout << "Rectangle 1 has area: " << area1 << endl;
        }
    } else{
        cout << "Rectangle 3 has area: " << area3 << endl;
        if (area1 > area2){
            cout << "Rectangle 1 has area: " << area1 << endl;
            cout << "Rectangle 2 has area: " << area2 << endl;
        } else {
            cout << "Rectangle 2 has area: " << area2 << endl;
            cout << "Rectangle 1 has area: " << area1 << endl;
        }
    }

    return (EXIT_SUCCESS);
}
