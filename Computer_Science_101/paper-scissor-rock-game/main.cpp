#include <iostream>
#include <random>


using namespace std;

int comp_choice() {
        random_device device;                                  // The true random seed
        uniform_int_distribution<int> distribution(1, 3);      // Return an integer value between 1 and 3
        int choice = distribution(device);                     // Saved value returned by the generator
        return choice;
}

int process_player_input(string &choice) {
        int ichoice = 1;
        if (choice == "rock" || choice == "Rock") {
                ichoice = 1;
        } else if (choice == "paper" || choice == "Paper") {
                ichoice = 2;
        } else if (choice == "scissor" || choice == "Scissor") {
                ichoice = 3;
        }

        return ichoice;
}

// This is a constant container that gives a name to a value
enum CHOICE {
        rock = 1,
        paper = 2,
        scissor = 3
};


void display_hand(int choice) {
        switch (choice) {
                case (int) CHOICE::rock: {
                        cout << "\nRock:" << endl;
                        cout << "\t _____" << endl;
                        cout << "\t/     |\\" << endl;
                        cout << "\t\\_|_|_/" << endl;
                        break;
                }

                case (int) CHOICE::paper: {
                        cout << endl << "Paper:" << endl;
                        cout << "\t /\\____" << endl;
                        cout << "\t|      _\\" << endl;
                        cout << "\t|  >    __/" << endl;
                        cout << "\t \\/=====/" << endl;
                        break;
                }

                case (int) CHOICE::scissor: {
                        cout << "\nScissor" << endl;
                        cout << "\t/\\____" << endl;
                        cout << "\t|   __/ " << endl;
                        cout << "\t\\___\\" << endl;
                        break;
                }

                default: {
                        cout << "Invalid" << endl;
                        break;
                }
        }
}


//TODO Fix the comparing function
// The second parameter is a function pointer and the empty parenthesis at the end means the expected parameters.
string compare_hands(int p_choice, int (*func_p)()) {
        string comparison;

        // Cases where the hands are the same
        if (p_choice == func_p()) {
                comparison = "Is a draw";
        } else if (p_choice == (int) CHOICE::rock && func_p() == (int) CHOICE::scissor) {
                comparison = "Player wins";
        } else if (p_choice == (int) CHOICE::paper && func_p() == (int) CHOICE::rock) {
                cout << "Player win" << endl;
        } else if (p_choice == (int) CHOICE::scissor && func_p() == (int) CHOICE::paper) {
                cout << "Player win" << endl;
        } else if (p_choice == (int) CHOICE::scissor && func_p() == (int) CHOICE::rock) {
                comparison = "Computer wins";
        } else if (p_choice == (int) CHOICE::rock && func_p() == (int) CHOICE::paper) {
                cout << "Computer wins" << endl;
        } else if (p_choice == (int) CHOICE::paper && func_p() == (int) CHOICE::scissor) {
                cout << "Computer wins" << endl;
        }

        return comparison;
}


void declare_winner(string &hand) {
        cout << hand << endl;
}

int main() {

        cout << "Options:\t rock | paper | scissor" << endl;
        cout << "Enter \'Play\' to play " << endl;
        string choice;
        getline(cin, choice);

        // Handle wrong input
        while (!(choice == "Play" || choice == "play")) {
                cout << "Invalid input" << endl;
                cout << "Try again" << endl;
                getline(cin, choice);
        }

        // Start game
        take_hand:
        cout << "Enter your choice: ";
        getline(cin, choice);

        // Handle choice of the player
        while (!(choice == "rock" || choice == "Rock" ||
                 choice == "paper" || choice == "Paper" ||
                 choice == "scissor" || choice == "Choice")) {

                cout << "Invalid input" << endl;
                cout << "Try again:  " << endl;
                getline(cin, choice);
        }

        cout << "Player Choice Made [] \n" << endl;

        // Display the computer choice
        cout << "Computer Choice:: " << endl;
        display_hand(comp_choice());

        // Display the player's hand
        cout << "\n\nPlayer's hand:: " << endl;
        display_hand(process_player_input(choice));

        // Compare the hands
        cout << endl;
        string winning_hand{compare_hands(process_player_input(choice), &comp_choice)};
        declare_winner(winning_hand);

        // Ask the user to play again
        cout << endl;
        cout << "Would you like to play again?";
        getline(cin, choice);
        while (!(choice == "yes" || choice == "Yes" || choice == "No" || choice == "no")) {
                cout << "Invalid input" << endl;
                cout << "Try again" << endl;
                choice.empty();
                getline(cin, choice);
        }

        if (choice == "yes" || choice == "Yes") {
                goto take_hand;
        } else {
                cout << endl << "Game has ended" << endl;
        }

        return 0;
}