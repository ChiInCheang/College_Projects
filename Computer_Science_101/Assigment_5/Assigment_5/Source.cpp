#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main ()
{
	cout << "Author: James Abreu." << endl;
	cout << __DATE__ << endl;
	cout << __TIMESTAMP__ << endl;
	cout << endl;
	fstream file{ "Random.txt" };
	if (!file.is_open ())
	{
		cout << "The file could not be found." << endl;
		return -1;
	}

	cout << "Processing file: " << endl;
	float running_total{ 0 };
	string num{ 0 };
	int line_count{ 0 };
	while (!file.eof ())
	{
		file >> num;
		running_total += stol (num);
		num.empty ();
		line_count++;
	}

	cout << "Line count: " << line_count << endl;
	cout << "Running total: " << running_total << endl;
	cout << "Average of Numbers: " << setprecision (2) << fixed << running_total / line_count << endl;

	file.close ();
	cout << "Done!" << endl;

	cin.get ();
	return 0;
}