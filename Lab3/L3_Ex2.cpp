#include <iostream>
using namespace std;

class Shape {
private:
    int radius;
    int base, height;
    int length, width;

public:
    // Function to calculate the area of a circle
    int area(int r) {
        radius = r;
        return 3.1416 * radius * radius;  // Approximation of Pi (3) for simplicity
    }

    // Function to calculate the area of a triangle
    int area(int b, int h) {
        base = b;
        height = h;
        return (base * height) / 2;
    }

    // Function to calculate the area of a rectangle
    int area(int l, int w, bool isRectangle) {
        length = l;
        width = w;
        return length * width;
    }
};

int main() {
    Shape shape;

    int radius, base, height, length, width;

    // Circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of Circle: " << shape.area(radius) << endl;

    // Triangle
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle: " << shape.area(base, height) << endl;

    // Rectangle
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of Rectangle: " << shape.area(length, width, true) << endl;

    return 0;
}
