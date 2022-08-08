#pragma once
#include "Point.h"
#include <iostream>
using namespace std;

class Line {
public:
	Line(int x, int y);
	~Line();
	int calculateLength() const;
private:
	Point* start;
	Point* end;
};
