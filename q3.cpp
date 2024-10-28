#include <iostream>
#include <string>
#include <vector>
using namespace std;     // Standard name space

class Player     // Define a class of type Player
{
private:     // Private variables
    string name;
    int score;
public:     // Public functions and constructors
    Player(int newScore, string newname) : score(newScore), name(newname) {};     // Constructor to set the private variables
    void setName(string newName) { name = newName; }     // Function that sets the player's name
    void setScore(int newScore) { score = newScore; }     // Function that sets the player's score
    string getName() {return name; }     // Function that obtains the player's name as a string
    int getScore() { return score; }     // Function that obtains the player's score as an integer
};

int displayMenu();     // Function that displays the program menu and obtains user menu selection input

int main()     // Main function to test program functionality
{
    // Define variables to be used in the remainder of main()
    int score, check, menu;
    string name;
    vector<Player> v;     // Vector v containing items of type Player

    int numPlayers = 0;     // Initialize number of players to zero
    // Loop that runs until 10 plays have been entered, or the user has finished entering all desired players
    do {
        // Prompt for and obtain user input for the player name
        cout << "Enter the player's name: " << endl;
        cin >> name;

        // Prompt for and obtain user input for the player score
        cout << "Enter the player's score: " << endl;
        cin >> score;

        numPlayers++;     // Increase the number of players by 1 for each loop iteration
        Player playerData(score, name);     // Call to the constructor
        v.push_back(playerData);     // Add the player data of type Player to the vector v

        // Prompt for and obtain user input to determine if more players are to be added
        cout << "Input 1 to enter another player's data. Input 0 if finished." << endl;
        cin >> check;
    } while (numPlayers < 10 && check != 0);     // Loop condition check

    cout << "Thank you!" << endl << endl;     // Output to indicate that the loop has been exited

    // Loop that runs until the user chooses to terminate the program
    do {
        menu = displayMenu();     // Display the menu and obtain user menu selection input

        // Switch statement where each case corresponds to a different menu selection
        switch(menu) {
        // Display a summary of all current player scores
        case 1:
            {
                cout << "PLAYER SCORES SUMMARY:" << endl;
                // Loop through each element in the vector v and print the name and corresponding score from each element
                for (int i = 0; i < v.size(); i++) {
                    cout << v[i].getName() << " -- " << v[i].getScore() << endl;
                }
                cout << endl;
                break;
            }

        // Search for a player by name and display their score
        case 2:
            {
                bool playerFound;     // Boolean expression that evaluates to true only when a desired player's record has been located
                string nameString;     // String containing the player name to be searched for
                // Loop that runs until the desired player record has been located
                do {
                    playerFound = false;     // Initialize playerFound to false since the player record has yet to be found
                    // Prompt user to input the player name to be searched for
                    cout << "Enter a player's name to view their score (case sensitive): " << endl;
                    cin >> nameString;     // Obtain user input
                    // Loop that iterates through each item in vector v
                    for (int i = 0; i < v.size(); i++) {
                        // if statement that compares the name from user input to each name entry in vector v
                        // The following operations are performed when a match is found
                        if (nameString == v[i].getName()) {
                            cout << v[i].getName() << "'s score is: " << v[i].getScore() << endl << endl;     // Output the score
                            playerFound = true;     // Update playerFound to true, indicating that the search is complete
                            break;
                        }
                    }
                    // If statement that runs if no match was found anywhere in vector v
                    if (playerFound == false) {
                        // Indicates to the user that another name should be searched for
                        cout << "No such player was found. Please try again." << endl << endl;
                    }
                } while (playerFound == false);     // Loop condition
                break;
            }

        // Search for a player's name and remove that player and their score from the list
        case 3:
            {
                bool playerFound;     // Boolean expression that evaluates to true only when a desired player's record has been located
                string nameString;     // String containing the player name to be searched for
                do {
                    // Loop that runs until the desired player record has been located
                    playerFound = false;     // Initialize playerFound to false since the player record has yet to be found
                    // Prompt user to input the player name to be searched for and deleted
                    cout << "Enter a player's name to remove them from the list (case sensitive): " << endl;
                    cin >> nameString;     // Obtain user input
                    // Loop that iterates through each item in vector v
                    for (int i = 0; i < v.size(); i++) {
                        // if statement that compares the name from user input to each name entry in vector v
                        // The following operations are performed when a match is found
                        if (nameString == v[i].getName()) {
                            cout << v[i].getName() << " has been removed" << endl << endl;     // Confirm deletion
                            v.erase(v.begin() + i);     // Erase the desired element in vector v
                            playerFound = true;     // Update playerFound to true, indicating that the search is complete
                            break;
                        }
                    }
                    // If statement that runs if no match was found anywhere in vector v
                    if (playerFound == false) {
                        // Indicates to the user that another name should be searched for
                        cout << "No such player was found. Please try again." << endl << endl;
                    }

                } while (playerFound == false);     // Loop condition

                // Display the updated player scores summary list
                cout << "UPDATED PLAYER SCORES SUMMARY:" << endl;
                // Loop through each item in vetor v
                for (int i = 0; i < v.size(); i++) {
                    cout << v[i].getName() << " -- " << v[i].getScore() << endl;     // Display the name andcorresponding score
                }
                cout << endl;
                break;
            }

        // Exit the program
        case 4:
            return 0;     // Terminate the program
        }
    } while(menu != 4);     // Loop condition
}

// Function that displays the program menu and obtains user menu selection input
int displayMenu()
{
    int selection;     // Define the variable for menu selection
    cout << "MENU:" << endl;
    // Display the menu options
    cout << "[1] Display All Player Scores" << endl;
    cout << "[2] Search for a Particular Player by Name" << endl;
    cout << "[3] Delete a Player" << endl;
    cout << "[4] Exit" << endl << endl;
    // Prompt for and obtain user input for the desired menu selection
    cout << "Enter your selection: " << endl;
    cin >> selection;

    // Loop that runs while and invalid menu item is being selected
    while(selection < 1 || selection > 4) {
        // Prompt for and obtain corrected user input
        cout << "Invalid selection. Please try again:" << endl;
        cin >> selection;
    }

    return selection;     // Return the desired menu selection
}
