#include "Circle.h"
#include <iostream>
using namespace std;
Circle::Circle(double radius) {
    if (radius > 0.0) {
        this->radius = radius;
    }
    else {
        cout << "Radius must be a positive value." << endl;
    }
}

Circle::Circle() : radius(0.0) {}

Circle::Circle(const Circle& circle) {
    this->radius = circle.radius;
}

void Circle::setRadius(double radius) {
    if (radius > 0.0) {
        this->radius = radius;
    }
    else {
        cout << "Error: Radius must be a positive value." << endl;
        return;
    }
}

double Circle::getRadius() const {
    return radius;
}

double Circle::getArea() const {
    return pi * radius * radius;
}

double Circle::getPerimeter() const {
    return 2.0 * pi * radius;
}

Circle::~Circle() {}
