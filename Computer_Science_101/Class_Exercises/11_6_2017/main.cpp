#include <iostream>

using namespace std;

void give_me_value(int &a){
	a = 6;
}

int main() {
//	double get_height();
//	double get_width();
//	double get_area(double, double);
//	void display_data(double);
//
//	display_data(get_area(get_height(), get_width()));
	int a {0};
	give_me_value(a);
	cout << a << endl;
	return 0;
}

//double get_height() {
//	double height;
//	cout << "Enter height of rect: ";
//	cin >> height;
//	return height;
//}
//
//double get_width() {
//	double width;
//	cout << "Enter width of rect ";
//	cin >> width;
//	return width;
//}
//
//double get_area(double width, double height) {
//	return height * width;
//}
//
//void display_data(double area) {
//	printf("Area of shape: %.2lf", area);
//}