#include <iostream>

using namespace std;     // Standard name space

// Define a class of type Month
class Month {
public:     // Public functions and constructors
    Month(char c1, char c2, char c3);     // Constructor that sets the month based on the first three characters of the month name
    Month(int monthNumber);     // Constructor that sets the month based on the month number
    Month();     // Default constructor
    void getMonthByNumber();     // Input function to set the month based on the month number
    void getMonthByName();     // Input function to set the month based on its three-character name
    void outputMonthNumber();     // Function that outputs the month number
    void outputMonthName();     // Function that outputs the month name
    Month nextMonth();     // Function that returns the next month as a Month object
    int monthNumber();     // Function that returns the month number

private:     // Private variables
    int month;
};

// Main function that provides various test cases for the above class definition
int main() {
    // Test of constructor Month(char c1, char c2, char c3)
    cout << "Test of constructor Month(char c1, char c2, char c3):" << endl << endl;
    Month a;     // Current month
    Month next;    // Next month

    // Test #1 (valid input)
    a = Month('J', 'A', 'N');     // Call constructor that sets the month based on the first three characters of the month name
    cout << "Month number: ";
    a.outputMonthNumber();     // Output the corresponding month number
    cout << endl << "Month name: ";
    a.outputMonthName();     // Output the corresponding month name
    cout << endl << "Next month number: ";
    next = a.nextMonth();     // Get the following month from the nextMonth() function
    next.outputMonthNumber();     // Output the next month number
    cout << endl << "Next month name: ";
    next = a.nextMonth();
    next.outputMonthName();     // Output the next month name

    // Test #2 (invalid input)
    a = Month('J', 'A', 'M');     // Call constructor that sets the month based on the first three characters of the month name
    cout << endl << endl << "Month number: ";
    a.outputMonthNumber();     // Output the corresponding month number
    cout << endl << "Month name: ";
    a.outputMonthName();     // Output the corresponding month name
    cout << endl << "Next month number: ";
    next = a.nextMonth();     // Get the following month from the nextMonth() function
    next.outputMonthNumber();     // Output the next month number
    cout << endl << "Next month name: ";
    next = a.nextMonth();
    next.outputMonthName();     // Output the next month name

    // Test #3 (valid input)
    a = Month('A', 'U', 'G');     // Call constructor that sets the month based on the first three characters of the month name
    cout << endl << endl << "Month number: ";
    a.outputMonthNumber();     // Output the corresponding month number
    cout << endl << "Month name: ";
    a.outputMonthName();     // Output the corresponding month name
    cout << endl << "Next month number: ";
    next = a.nextMonth();     // Get the following month from the nextMonth() function
    next.outputMonthNumber();     // Output the next month number
    cout << endl << "Next month name: ";
    next = a.nextMonth();
    next.outputMonthName();     // Output the next month name

    // Test #4 (invalid input)
    a = Month('A', 'B', 'C');     // Call constructor that sets the month based on the first three characters of the month name
    cout << endl << endl << "Month number: ";
    a.outputMonthNumber();     // Output the corresponding month number
    cout << endl << "Month name: ";
    a.outputMonthName();     // Output the corresponding month name
    cout << endl << "Next month number: ";
    next = a.nextMonth();     // Get the following month from the nextMonth() function
    next.outputMonthNumber();     // Output the next month number
    cout << endl << "Next month name: ";
    next = a.nextMonth();
    next.outputMonthName();     // Output the next month name


    // Test the constructor Month(int monthNumber)
    cout << endl << endl << "Test of constructor Month(int monthNumber):";

    a = Month(3);     // Call the constructor that sets the month based on the month number
    cout << endl << endl << "Month number: ";
    a.outputMonthNumber();     // Output the corresponding month number
    cout << endl << "Month name: ";
    a.outputMonthName();     // Output the corresponding month name
    cout << endl << "Next month number: ";
    next = a.nextMonth();     // Get the following month from the nextMonth() function
    next.outputMonthNumber();     // Output the next month number
    cout << endl << "Next month name: ";
    next = a.nextMonth();
    next.outputMonthName();     // Output the next month name

    a = Month(11);     // Call the constructor that sets the month based on the month number
    cout << endl << endl << "Month number: ";
    a.outputMonthNumber();     // Output the corresponding month number
    cout << endl << "Month name: ";
    a.outputMonthName();     // Output the corresponding month name
    cout << endl << "Next month number: ";
    next = a.nextMonth();     // Get the following month from the nextMonth() function
    next.outputMonthNumber();     // Output the next month number
    cout << endl << "Next month name: ";
    next = a.nextMonth();
    next.outputMonthName();     // Output the next month name

    a = Month(13);     // Call the constructor that sets the month based on the month number
    cout << endl << endl << "Month number: ";
    a.outputMonthNumber();     // Output the corresponding month number
    cout << endl << "Month name: ";
    a.outputMonthName();     // Output the corresponding month name
    cout << endl << "Next month number: ";
    next = a.nextMonth();     // Get the following month from the nextMonth() function
    next.outputMonthNumber();     // Output the next month number
    cout << endl << "Next month name: ";
    next = a.nextMonth();
    next.outputMonthName();     // Output the next month name


    // Test the function getMonthByNumber()
    cout << endl << endl << "Test of getMonthByNumber():" << endl << endl;

    cout << "Enter a month number (1/3): " << endl;     // Prompt user for input
    a.getMonthByNumber();     // Obtain user input for the desired month number
    cout << endl << "Month number: ";
    a.outputMonthNumber();     // Output the corresponding month number
    cout << endl << "Month name: ";
    a.outputMonthName();     // Output the corresponding month name
    cout << endl << "Next month number: ";
    next = a.nextMonth();     // Get the following month from the nextMonth() function
    next.outputMonthNumber();     // Output the next month number
    cout << endl << "Next month name: ";
    next = a.nextMonth();
    next.outputMonthName();     // Output the next month name

    cout << endl << endl << "Enter another month number (2/3): " << endl;     // Prompt user for input
    a.getMonthByNumber();     // Obtain user input for the desired month number
    cout << endl << "Month number: ";
    a.outputMonthNumber();     // Output the corresponding month number
    cout << endl << "Month name: ";
    a.outputMonthName();     // Output the corresponding month name
    cout << endl << "Next month number: ";
    next = a.nextMonth();     // Get the following month from the nextMonth() function
    next.outputMonthNumber();     // Output the next month number
    cout << endl << "Next month name: ";
    next = a.nextMonth();
    next.outputMonthName();     // Output the next month name

    cout << endl << endl << "Enter another month number (3/3): " << endl;     // Prompt user for input
    a.getMonthByNumber();     // Obtain user input for the desired month number
    cout << endl << "Month number: ";
    a.outputMonthNumber();     // Output the corresponding month number
    cout << endl << "Month name: ";
    a.outputMonthName();     // Output the corresponding month name
    cout << endl << "Next month number: ";
    next = a.nextMonth();     // Get the following month from the nextMonth() function
    next.outputMonthNumber();     // Output the next month number
    cout << endl << "Next month name: ";
    next = a.nextMonth();
    next.outputMonthName();     // Output the next month name


    // Test the function getMonthByName()
    cout << endl << endl << "Test of getMonthByName():" << endl << endl;

    cout << "Enter a month name (three characters with capital letters only) (1/3): " << endl;     // Prompt user for input
    a.getMonthByName();     // Obtain user input for the desired month name (first three characters)
    cout << endl << "Month number: ";
    a.outputMonthNumber();     // Output the corresponding month number
    cout << endl << "Month name: ";
    a.outputMonthName();     // Output the corresponding month name
    cout << endl << "Next month number: ";
    next = a.nextMonth();     // Get the following month from the nextMonth() function
    next.outputMonthNumber();     // Output the next month number
    cout << endl << "Next month name: ";
    next = a.nextMonth();
    next.outputMonthName();     // Output the next month name

    cout << endl << endl << "Enter another month name (three characters with capital letters only) (2/3): " << endl;     // Prompt user for input
    a.getMonthByName();     // Obtain user input for the desired month name (first three characters)
    cout << endl << "Month number: ";
    a.outputMonthNumber();     // Output the corresponding month number
    cout << endl << "Month name: ";
    a.outputMonthName();     // Output the corresponding month name
    cout << endl << "Next month number: ";
    next = a.nextMonth();     // Get the following month from the nextMonth() function
    next.outputMonthNumber();     // Output the next month number
    cout << endl << "Next month name: ";
    next = a.nextMonth();
    next.outputMonthName();     // Output the next month name

    cout << endl << endl << "Enter another month name (three characters with capital letters only) (3/3): " << endl;     // Prompt user for input
    a.getMonthByName();     // Obtain user input for the desired month name (first three characters)
    cout << endl << "Month number: ";
    a.outputMonthNumber();     // Output the corresponding month number
    cout << endl << "Month name: ";
    a.outputMonthName();     // Output the corresponding month name
    cout << endl << "Next month number: ";
    next = a.nextMonth();     // Get the following month from the nextMonth() function
    next.outputMonthNumber();     // Output the next month number
    cout << endl << "Next month name: ";
    next = a.nextMonth();
    next.outputMonthName();     // Output the next month name

    return 0;     // Terminate the program
}

// Set the month based on the first three characters of the month name (three characters; caps only)
Month::Month(char c1, char c2, char c3) {
    // Checks for three-character matches, and assigns the corresponding month number
    if (c1 == 'J' && c2 == 'A' && c3 == 'N') { month = 1;}
    else if (c1 == 'F' && c2 == 'E' && c3 == 'B') { month = 2;}
    else if (c1 == 'M' && c2 == 'A' && c3 == 'R') { month = 3;}
    else if (c1 == 'A' && c2 == 'P' && c3 == 'R') { month = 4;}
    else if (c1 == 'M' && c2 == 'A' && c3 == 'Y') { month = 5;}
    else if (c1 == 'J' && c2 == 'U' && c3 == 'N') { month = 6;}
    else if (c1 == 'J' && c2 == 'U' && c3 == 'L') { month = 7;}
    else if (c1 == 'A' && c2 == 'U' && c3 == 'G') { month = 8;}
    else if (c1 == 'S' && c2 == 'E' && c3 == 'P') { month = 9;}
    else if (c1 == 'O' && c2 == 'C' && c3 == 'T') { month = 10;}
    else if (c1 == 'N' && c2 == 'O' && c3 == 'V') { month = 11;}
    else if (c1 == 'D' && c2 == 'E' && c3 == 'C') { month = 12;}
    else { month = 0; }     // If the characters do not match a month, set the month to 0 to indicate an error
}

// Set the month based on the month number
Month::Month(int monthNumber) { month = monthNumber; }

// Default case sets the month to 1 (January)
Month::Month() : month(1) {}

// Return the next month as a month object
Month Month::nextMonth() {
    int nextMonth;
    nextMonth = month + 1;     // Add one to the existing month number
    if (nextMonth == 13) { nextMonth = 1; }     // If the next month is 13, that means the original month was Dec (12), so next month is Jan (1)
    if (month == 0) { nextMonth = 0; }     // If month = 0, that means there was an invalid input earlier, so do nothing
    return Month(nextMonth);     // Return the next month as an object of type Month
}

// Function that returns the current month number
int Month::monthNumber() { return month; }

// Function that outputs the current month number
void Month::outputMonthNumber() {
    cout << month;
}

// Function that outputs the current month name
void Month::outputMonthName(){
    // List of if-statements containing each month and its corresponding name
    if (month == 1) { cout << "January"; }
    else if (month == 2) { cout << "February"; }
    else if (month == 3) { cout << "March"; }
    else if (month == 4) { cout << "April"; }
    else if (month == 5) { cout << "May"; }
    else if (month == 6) { cout << "June"; }
    else if (month == 7) { cout << "July"; }
    else if (month == 8) { cout << "August"; }
    else if (month == 9) { cout << "September"; }
    else if (month == 10) { cout << "October"; }
    else if (month == 11) { cout << "November"; }
    else if (month == 12) { cout << "December"; }
    else { cout << "Invalid month. Please try again."; }     // Outputs a message indicating an invalid month was entered
}

// Function that sets the month based on its three-character name (caps only)
void Month::getMonthByName() {
    char c1, c2, c3;     // Define the three character variables
    cin >> c1 >> c2 >> c3;     // Take in user input for the three characters

    // List of if statements containing each valid three-character combo and the corresponding month number
    if (c1 == 'J' && c2 == 'A' && c3 == 'N') { month = 1;}
    else if (c1 == 'F' && c2 == 'E' && c3 == 'B') { month = 2;}
    else if (c1 == 'M' && c2 == 'A' && c3 == 'R') { month = 3;}
    else if (c1 == 'A' && c2 == 'P' && c3 == 'R') { month = 4;}
    else if (c1 == 'M' && c2 == 'A' && c3 == 'Y') { month = 5;}
    else if (c1 == 'J' && c2 == 'U' && c3 == 'N') { month = 6;}
    else if (c1 == 'J' && c2 == 'U' && c3 == 'L') { month = 7;}
    else if (c1 == 'A' && c2 == 'U' && c3 == 'G') { month = 8;}
    else if (c1 == 'S' && c2 == 'E' && c3 == 'P') { month = 9;}
    else if (c1 == 'O' && c2 == 'C' && c3 == 'T') { month = 10;}
    else if (c1 == 'N' && c2 == 'O' && c3 == 'V') { month = 11;}
    else if (c1 == 'D' && c2 == 'E' && c3 == 'C') { month = 12;}
    else {
        month = 0;     // If there is no match, the input is invalid and a month value of zero is assigned to indicate this
    }
}

// Function that sets the month based on a month number from user input
void Month::getMonthByNumber() {
    cin >> month;
}
