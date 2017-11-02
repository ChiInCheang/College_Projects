#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;


void user_info() {
	cout << "\tAuthor: James Abreu." << endl;
	cout << "\t" << __DATE__ << endl;
	cout << "\t" << __TIMESTAMP__ << endl;
	cout << endl;
}

int main() {
	user_info();
	fstream input_file{"\/Text_Files\/Random.txt"};
	cout << "\/Text_Files\/Random.txt" << endl;
	/*
	 * Check if the input_file opened correctly
	 */
	if (!input_file.is_open()) {
		cout << "File not found" << endl;
		return -1;
	}

	/*
	 * Add the value of each line while it is not the end of the input_file.
	 */
	string value;
	int running_total{0};
	string num;
	int sum{0};
	while (!input_file.eof()) {
		getline(input_file, num);
		sum += stoi(num);
		running_total += stoi(value);
	}

	cout << "Sum of " << running_total << endl;

	input_file.close();
	return 0;
}

  