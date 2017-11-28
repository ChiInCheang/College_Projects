#include <iostream>
#include <random>
#include <ctime>

using namespace std;

void coin_toss() {
        random_device rdev;
        uniform_int_distribution<int>dist(1,2);
        if (dist(rdev) == 1) {
                cout << "Head" << endl;
        } else if (dist(rdev) == 2){
                cout << "Tails" << endl;
        }
}

int main() {

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
