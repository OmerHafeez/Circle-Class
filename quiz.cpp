#include <iostream>
#include "Circle.h"
using namespace std;
int main() {
    Circle circle1(5.0); // Parameter constructor
    Circle circle2;      // Default constructor
    Circle circle3 = circle1; // Copy constructor

    cout << "Circle 1:" << endl;
    cout << "Radius: " << circle1.getRadius() << endl;
    cout << "Area: " << circle1.getArea() << endl;
    cout << "Perimeter: " << circle1.getPerimeter() << endl;
    cout << endl;
    cout << endl;

    cout << "Circle 2:" << endl;
    cout << "Radius: " << circle2.getRadius() << endl;
    cout << "Area: " << circle2.getArea() << endl;
    cout << "Perimeter: " << circle2.getPerimeter() << endl;
    cout << endl;
    cout << endl;

    cout << "Circle 3:" << endl;
    cout << "Radius: " << circle3.getRadius() << endl;
    cout << "Area: " << circle3.getArea() << endl;
    cout << "Perimeter: " << circle3.getPerimeter() << endl;
    cout << endl;
    cout << endl;

    circle2.setRadius(3.0);
    cout << "Circle 2 Updated:" << endl;
    cout << "Radius: " << circle2.getRadius() << endl;
    cout << "Area: " << circle2.getArea() << endl;
    cout << "Perimeter: " << circle2.getPerimeter() << endl;

    return 0;
}
