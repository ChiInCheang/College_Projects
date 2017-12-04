#include <iostream>
#include <random>
#include <ctime>

using namespace std;

void coin_toss() {
	int dist = 1 + (rand() % 2);
	if (dist == 1) {
		cout << "Head" << endl;
	} else if (dist == 2) {
		cout << "Tails" << endl;
	}
}

int main() {
	unsigned seed{static_cast<unsigned>(time(nullptr))};
	srand(seed);

	cout << "Enter the number of times the coin will be tossed: ";
	int toss = 0;
	cin >> toss;

//        While the user does not input a number greater than or 0
	while (toss < -1) {
		cout << "Invalid input.\r" << endl;
		cin >> toss;
	}

//        If the user does not input any toss count
	if (toss == 0) {
		cout << "The coin was not tossed." << endl;
		return 0;
	}

//        Toss the coin.
	int counter = 1;
	while (counter <= toss) {
		coin_toss();
		counter++;
	}

	return 0;
}
