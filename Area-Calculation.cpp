#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

class area_c1 {
public:
    double height, width;
};

class Rectangle : public area_c1 {
public:
    double area(double h, double w) {
        height = h;
        width = w;
        return height * width;
    }
};

class Cone : public area_c1 {
public:
    double area(double h, double w) {
        height = h;
        width = w;

        double radius = width / 2;
        double slant_height = sqrt(pow(radius, 2) + pow(height, 2));
        double base_area = M_PI * pow(radius, 2);
        double lateral_area = M_PI * radius * slant_height;
        return base_area + lateral_area;
    }
};

int main() {
    double h, w;
    cout << "What are the dimensions?\n";

    while (!(cin >> w >> h)) {
        cout << "You entered characters, please enter numbers: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    Rectangle rect;
    Cone cone;

    double rect_area = rect.area(h, w);
    double cone_area = cone.area(h, w);

    cout << "Rectangle's area is: " << rect_area << endl;
    cout << "Cone's area is: " << cone_area << endl;

    return 0;
}
