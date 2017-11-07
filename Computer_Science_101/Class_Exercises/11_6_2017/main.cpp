#include <iostream>

using namespace std;

int main() {
	double get_height();
	double get_width();
	double get_area(double, double);

	cout << "Area of rect: " << get_area(get_width(), get_height()) << endl;

	return 0;
}

double get_height() {
	double height;
	cout << "Enter height of rect: ";
	cin >> height;
	return height;
}

double get_width() {
	double width;
	cout << "Enter width of rect ";
	cin >> width;
	return width;
}

double get_area(double width, double height) {
	return height * width;
}