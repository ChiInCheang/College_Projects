#include <iostream>
#include <random>


using namespace std;

int comp_guess() {
        random_device device;                                  // The true random seed
        uniform_int_distribution<int> distribution(1, 3);      // Return an integer value between 1 and 3
        int choice = distribution(device);                     // Saved value returned by the generator
        return choice;
}

int process_player_input(string &choice) {
        int ichoice = 0;
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
        paper,  //2
        scissor //3
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
                }

                default: {
                        cout << "Invalid" << endl;
                        break;
                }
        }
}


string compare_hands(int p_choice, int c_choice) {
        cout << endl;
        string comparison;
        // Cases where the hands are the same
        if (p_choice == CHOICE::rock && c_choice == CHOICE::rock) {
                comparison = "Is a draw";
        } else if (p_choice == CHOICE::paper && c_choice == CHOICE::paper) {
                comparison = "Is a draw";
        } else if (p_choice == CHOICE::scissor && c_choice == CHOICE::scissor) {
                comparison = "Is a draw";
        }
                // Cases where the hands are opposites
        else if (p_choice == CHOICE::rock && c_choice == CHOICE::scissor ||
                 p_choice == CHOICE::paper && c_choice == CHOICE::rock) {
                comparison = "Player wins";
        } else {
                cout << "Computer wins" << endl;
        }


        return comparison;
}


void declare_winner(string &hand) {
        cout << hand << endl;
}

int main() {
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
        choice.empty();
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
        display_hand(comp_guess());

        // Display the player's hand
        cout << "\n\nPlayer's hand:: " << endl;
        display_hand(process_player_input(choice));

        // Compare the hands
        cout << endl;
        string winning_hand{compare_hands(process_player_input(choice), comp_guess())};
        declare_winner(winning_hand);

//        Ask the user to play again
        cout << endl;
        cout << "Would you like to play again?";
        choice.empty();
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


        cout << endl << "Press any key to continue: " << endl;
        cin.ignore();
        cin.get();
        return 0;
}