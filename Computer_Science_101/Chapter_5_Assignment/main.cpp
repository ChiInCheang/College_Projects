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
	fstream file("Text_Files\\Random.txt");

	if (file.is_open()) {
		cout << "The files is open." << endl;
	} else {
		cout << "The file did not open." << endl;
	}


	file.close();
	cin.get();
	return 0;
}

  