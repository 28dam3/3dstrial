#include "Point.h"

Point::Point(int a, int b) {
	SetPoint(a, b);
}

void Point::SetPoint(int a, int b) {
	x = a;
	y = b;
}

ostream& operator<<(ostream& out, const Point& p) {
	out << "[" << p.x << "," << p.y << "]";
	return out;
}

void Point::print() const {
	cout << "[" << x << "," << y << "]\n";
}