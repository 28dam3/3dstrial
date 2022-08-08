#include "Shape.h"
#include <iostream>
using namespace std;

void virtualViaPointer(const Shape* baseptr) {
	baseptr->drawShape();
	baseptr->print();
	cout << "Area is " << baseptr->calculateArea() << " and Volume is " << baseptr->calculateVolume() << "\n";
}

void virtualViaReference(const Shape& baseClassRef) {
	baseClassRef.drawShape();
	baseClassRef.print();
	cout << "\nArea = " << baseClassRef.calculateArea() << " and Volume is " << baseClassRef.calculateVolume() << "\n";
}