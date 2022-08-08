// Shapes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Point.h"
#include "Circle.h"
#include "Cylinder.h"
#include "Shape.h"
#include <iostream>

int main()
{
    Point *pointPtr = 0, p(30, 50);
    Circle *circlePtr = 0, c(2.7, 120, 89);
    cout << "Point p:" << p << "\nCircle c:" << c << "\n";

    // Treat a circle as a point (see only the base class part)
    pointPtr = &c;
    cout << "\nCircle c (via *pointPtr):" << *pointPtr << "\n";

    //Treat a Circle as a circle (with some casting)
    // cast base-class pointer to derived-class pointer
    circlePtr = static_cast<Circle*>(pointPtr);
    cout << "\nCircle of c (via *circlePtr):\n" << *circlePtr << "\nArea of c (via circlePtr): "\
        << circlePtr->calculateArea() << "\n";

    //Dangerous: Treat a Point as a cicle
    pointPtr = &p;      //assign address of point to pointPtr
    // cast base-class pointer to derived-class pointer
    circlePtr = static_cast<Circle*>(pointPtr);
    cout << "\nPoint p (via *circlePtr):\n" << *circlePtr << "\nArea of object circlePtr points to: "\
         << circlePtr->calculateArea() << endl;

    Cylinder cyl(5, 5, 7, 7);
    cout << "Cylinder cyl: " << cyl;

    Point p1(2, 4);
    p1.drawShape();
    p1.print();
    cout << "Area is " << p1.calculateArea() << "and volume is " << p1.calculateVolume() << endl;

    Circle ci1(5, 3, 4);
    ci1.drawShape();
    ci1.print();
    cout << "Area is " << ci1.calculateArea() << "and volume is " << ci1.calculateVolume() << endl;

    Cylinder cy2(1, 2, 3, 4);
    cy2.drawShape();
    cy2.print();
    cout << "Area is " << cy2.calculateArea() << "and volume is " << cy2.calculateVolume() << endl;

    Shape* shape[3] = { &p1, &ci1, &cy2 };
    for (int i = 0; i < 3; ++i) {
        virtualViaPointer(shape[i]);
    }
    for (int i = 0; i < 3; ++i) {
        virtualViaReference(*shape[i]);
    }
    
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
