#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
private:
    double radius;
    const double pi = 3.14;

public:
    Circle(double radius);
    Circle();
    Circle(const Circle& circle);
    void setRadius(double radius);
    double getRadius() const;
    double getArea() const;
    double getPerimeter() const;
    ~Circle();
};

#endif // CIRCLE_H
