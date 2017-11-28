#include <iostream>
#include <random>
#include <ctime>

using namespace std;

void coin_toss() {
        unsigned seed = static_cast<unsigned>(time(nullptr));
        unsigned toss = rand() % 2 + 1;
        if (toss == 1) {
                cout << "Head" << endl;
        } else {
                cout << "Tails" << endl;
        }
}

int main() {

        cout << "Enter the number of times the coin will be tossed: ";
        int toss = 0;
        cin >> toss;
        while (toss < -1) {
                cout << "Invalid input.\r" << endl;
                cin >> toss;
        }

        if (toss == 0) {
                cout << "The coin was not tossed." << endl;
                return 0;
        }

        int counter = 0;
        while (counter <= toss) {
                coin_toss();
                counter++;
        }

        return 0;
}
