#include <iostream>
#include <fstream>


/*
 * TODO: Fix the loop
 * TODO: Check why the file is not outputting lines
 */
using namespace std;


fstream create_file() {
	fstream file{"..\\Text-Files\\number-file.txt", ios::in | ios::out};
	if (!file.is_open()) {
		throw "The file did not open correctly. ";
	}else {cout << "File opened successful" << endl;}

	file.close();
	return file;
}

//Fill the file with the numbers
void fill_file(fstream &file) {
	for (int x = 1; x <= 7; x++) {
		for (int y = 1; y <= 7; y++) {
			file << x << y << endl;
		}
		if (x == 7){break;}
	}

	file.close();
}

//Get the line count
int get_line_count(fstream &file){
	int count {0};
	while (!file.eof()){
		count++;
	}
	file.close();
	return count;
}

int sum_of_lines(fstream &file){
	int sum {0};
	int line {0};
	while(file >> line){
		sum += (int)line;
	}
	file.close();
	return sum;
}

//Get the average and sum of all numbers in the file
float get_average(float sum_of_line, float line_count) {
	return sum_of_line / line_count;
}

int main() {
	fstream text_file{create_file()};
	fill_file(text_file);
	int line_count{get_line_count(text_file)};
	int sum {sum_of_lines(text_file)};
	float aver{get_average(sum, line_count)};

	cout << "Line count: " << line_count << endl;
	cout << "Sum of the lines: " << sum << endl;
	cout << "Average: " << aver << endl;
	text_file.close();
	return 0;
}