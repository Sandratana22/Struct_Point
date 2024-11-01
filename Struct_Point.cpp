
#include <iostream>
#include "Point.h"

using namespace std; 

int main(){
    Struct_Point::Coordinates point1 = { 1, 2 };
    Struct_Point::Coordinates point2 = { 3, 2 };

    //Printing equality operator
    if (point1 == point2) {
        cout << "p1 and p2 are equal." << endl;
    }
    else {
        cout << "p1 and p2 are not equal." << endl;
    }

    // Printing stream insertion operator
    cout << "Point 1: " << point1 << endl;
    cout << "Point 2: " << point2 << endl;

    return 0;
   
}
