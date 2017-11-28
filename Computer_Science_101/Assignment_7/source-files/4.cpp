#include <iostream>
#include <random>
#include <ctime>

using namespace std;

struct rectangle {
        double length = 1.0f;
        double width = 1.0f;
        double area = 1.0f;
} rectangle1;

double get_length();
double get_width();
double get_area();
void display_data(double, double, double);

int main() {

        display_data(get_area(), get_length(), get_width());
        return 0;
}


double get_length() {
        cout << "Enter the length of the rectangle:  ";
        cin >> rectangle1.length;
        if (rectangle1.length <= 0.0f){
                cout << "The length cannot be less than 0 " << endl;
                rectangle1.length = 1.0f;
        }
        return rectangle1.length;
}


double get_width() {
        cout << "Enter the width of the rectangle:  ";
        cin >> rectangle1.width;
        if (rectangle1.width <= 0.0f){
                cout << "The width cannot be less than 0 " << endl;
                rectangle1.width = 1.0f;
        }
        return rectangle1.width;
}

double get_area() {
        return rectangle1.length * rectangle1.width;
}

void display_data(double area, double width, double length) {
        cout << "Rectangle Aspects:: " << endl;
        cout << "\tLength--> " << length << endl;
        cout << "\twidth--> " << width << endl;
        cout << "\tArea--> " << area << endl;
}
