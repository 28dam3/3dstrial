#include "Cylinder.h"
extern const double PI;

Cylinder::Cylinder(double h, double r, int x, int y) :Circle(r, x, y) {
	setHeight(h);
}

void Cylinder::setHeight(double h) {
	height = (h >= 0 ? h : 0);
}

double Cylinder::getHeight() const { return height; }

double Cylinder::calculateArea() const {
	return 2 * Circle::calculateArea() + 2 * PI * radius * height;
}

double Cylinder::calculateVolume() const {
	return Circle::calculateArea() * height;
}

void Cylinder::print() const {
	Circle::print();
	cout << "Radius: " << radius << "  " << "Height: " << height << endl;
}

ostream& operator<<(ostream& out, const Cylinder& cyl) {
	out << "Center at " << static_cast<Point>(cyl)\
		<< "Radius as " << static_cast<Circle>(cyl) << "is " << cyl.calculateArea() << " " << cyl.calculateVolume();
	return out;
}