#include <iostream>
#include <random>
#include <string>

using namespace std;

void creators_info(){
        cout << __TIMESTAMP__ << endl;
        cout << "James Smith && ";
        cout << "Chin " << endl;
}

// This is a constant container that gives a name to a value
enum CHOICE {
        rock = 1,
        paper = 2,
        scissor = 3
};

struct game_controller_struct {

        game_controller_struct() = default;

/*
 * Static variable declaration (Meaning
 * the variable exist but the compiler have no reference to them)
 */
        static int p_score;
        static int c_score;
        static bool p_wins;
        static bool c_wins;

};

// Static variable value definition (Now the variable exist and the compiler linker can find it).
int game_controller_struct::c_score = 0;
int game_controller_struct::p_score = 0;
bool game_controller_struct::p_wins = false;
bool game_controller_struct::c_wins = false;

// Display the game title
void display_tittle() {
        cout << "__________________________________________________________________" << endl;
        cout << "\t\t\t ______" << "    |    " << " ______" << "     |    " << " ______ " << endl;
        cout << "\t\t\t|      |" << "   |    " << "|      |" << "    |    " << "|   ___| " << endl;
        cout << "\t\t\t|  |\\  \\" << "   |    " << "|  | --" << "     |    " << " \\__ \\" << endl;
        cout << "\t\t\t|__| \\__\\" << "  |    " << "|__| " << "       |    " << "|_____|" << endl;
        cout << "___________________________________________________________________" << endl;
        cout << "\n\n";

}


// Generate the random choice of the computer
int comp_choice() {
        random_device device;
        uniform_int_distribution<int> distribution(1, 3);
        return distribution(device);
}


// Turn the player string into a int equivalent value
int process_player_input(string &choice) {
        int val_of_choice = 1;

        if (choice == "rock" || choice == "Rock") {
                val_of_choice = 1;
        } else if (choice == "paper" || choice == "Paper") {
                val_of_choice = 2;
        } else if (choice == "scissor" || choice == "Scissor") {
                val_of_choice = 3;
        }

        return val_of_choice;
}

// Keep track of the game score
void keep_score() {
        cout << endl;

        /*===============================================================================
         * After checking if any of the conditions is true, turn back the boolean value =
         * to false                                                                     =
         * ==============================================================================
         */
        if (game_controller_struct::p_wins) {
                cout << "Player_Score = " << ++game_controller_struct::p_score << endl;
                game_controller_struct::p_wins = !game_controller_struct::p_wins;
        }
        if (game_controller_struct::c_wins) {
                cout << "Computer_Score = " << ++game_controller_struct::c_score << endl;
                game_controller_struct::c_wins = !game_controller_struct::c_wins;
        }
}


//TODO: Find the reason for this block to not return the expected value
// Return the winning hand of the current game.
string claim_winner(int p_choice, int c_choice) {
        string comparison;

        if (p_choice == c_choice) {
                comparison = "Tied";
        } else if (p_choice == (int) CHOICE::paper && c_choice == (int) CHOICE::rock ||
                   (p_choice == (int) CHOICE::rock && c_choice == (int) CHOICE::scissor) ||
                   (p_choice == (int) CHOICE::scissor && c_choice == (int) CHOICE::paper)) {
                comparison = "Player Wins";
                game_controller_struct::p_wins = true;
        } else {
                game_controller_struct::c_wins = true;
                comparison = "Computer Wins";
        }

        keep_score();

        return comparison;
}

// The stats to be display at the end of the game.
void end_game_stats() {
        cout << "Player_Score: " << game_controller_struct::p_score << endl;
        cout << "Computer_Score: " << game_controller_struct::c_score << endl;
}

// Display the hand equivalent to the int value of the hands
void display_hand(int choice) {
        switch (choice) {
                case (int) CHOICE::rock: {
                        cout << endl << "\nRock:" << endl;
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

// Main
int main() {

        creators_info();
        display_tittle();
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
                 choice == "scissor" || choice == "Scissor")) {

                cout << "Invalid input" << endl;
                cout << "Try again:  " << endl;
                getline(cin, choice);
        }

        // Display the computer choice
        cout << "Computer_choice:: " << endl;
        display_hand(comp_choice());

        // Display the player's hand
        cout << "\n\nPlayer_hand:: " << endl;
        display_hand(process_player_input(choice));

        // Compare the hands
        cout << endl;
        cout << claim_winner(process_player_input(choice), comp_choice());

        // Ask the user to play again
        cout << endl;
        cout << "Would you like to play again?";
        getline(cin, choice);
        while (!(choice == "yes" || choice == "Yes" || choice == "No" || choice == "no")) {
                cout << "Invalid input" << endl;
                cout << "Try again" << endl;
                getline(cin, choice);
        }

        // Check if the player wants to play again
        if (choice == "yes" || choice == "Yes") {
                goto take_hand;
        } else {
                cout << endl << "Game has ended" << endl;
                cout << endl << "End Game Stats: " << endl;
                end_game_stats();
        }

        return 0;
}