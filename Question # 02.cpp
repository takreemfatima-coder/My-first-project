#include <iostream>
using namespace std;

// Circle class definition
class Circle {
private:
    double radius;

public:
    // Constructor to initialize radius to 0
    Circle() : radius(0) {}

    // Member function to set radius
    void setRadius(double r) {
        radius = r;
    }

    // Member function to calculate and display area of circle
    void area() {
        double area = 3.14159 * radius * radius;
        cout << "Area of the circle: " << area << endl;
    }

    // Member function to calculate and display circumference of circle
    void circum() {
        double circumference = 2 * 3.14159 * radius;
        cout << "Circumference of the circle: " << circumference << endl;
    }
};

int main() {
    // Create an object of Circle
    Circle myCircle;

    // Set radius value to 5
    myCircle.setRadius(5);

    // Display the area and circumference of the circle
    myCircle.area();
    myCircle.circum();

    return 0;
}
