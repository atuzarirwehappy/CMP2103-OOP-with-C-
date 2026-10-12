import std;
using namespace std;

class Rectangle {
private:
    double width;
    double length;

public:
    // Setters
    void setWidth(double w) {
        width = w;
    }

    void setLength(double l) {
        length = l;
    }

    // Getters
    double getWidth() {
        return width;
    }

    double getLength() {
        return length;
    }

    // Calculate area
    double getArea() {
        return width * length;
    }

    // Calculate perimeter
    double getPerimeter() {
        return 2 * (width + length);
    }
};

int main() {
    Rectangle r1;

    // Set dimensions
    r1.setWidth(5);
    r1.setLength(10);

    // Retrieve dimensions
    cout << "Width: " << r1.getWidth() << endl;
    cout << "Length: " << r1.getLength() << endl;

    // Calculate and display area and perimeter
    cout << "Area: " << r1.getArea() << endl;
    cout << "Perimeter: " << r1.getPerimeter() << endl;
    
    return 0;
}