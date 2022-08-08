#pragma once

class Shape {
public:
	virtual double calculateArea() const { return 0.0; }
	virtual double calculateVolume() const { return 0.0; }
	virtual void drawShape() const = 0;
	virtual void print() const = 0;
};

void virtualViaPointer(const Shape*);

void virtualViaReference(const Shape&);