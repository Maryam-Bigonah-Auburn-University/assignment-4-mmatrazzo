#include <iostream>
#include <iomanip>
using namespace std;     // Standard name space

// Define a class of type GasPump
class GasPump {
private:     // Private variables
    double amountDispensed,
           amountCharged,
           costPerGallon,
           timeDispensed;

public:     // Public Functions
    double getAmountDispensed(){ return amountDispensed; }     // Function to obtain the amount of gas dispensed
    double getAmountCharged() { return amountCharged; }     // Function to obtain the amount of money charged
    double getCostPerGallon() { return costPerGallon; }     // Function to obtain the cost per gallon of gas
    void setCostPerGallon(double cpg) { costPerGallon = cpg; }     // Function to set the cost per gallon of gas
    // Function to calculate the amount of gas dispensed and the resulting amount of money charged
    void dispense(int seconds) {
        amountDispensed = seconds * 0.1;     // Pump dispenses at a rate of 0.1 gal/sec
        amountCharged = amountDispensed * costPerGallon;
    }
    // Function to reset the amount of gas dispensed and money charged after fueling is complete
    void reset() {
        amountDispensed = 0.0;
        amountCharged = 0.0;
    }
};

// Main function to test the above class definition
int main() {
    // Define the variables to be used in the remainder of the program
    GasPump exxon;     // Variable exxon of type GasPump (defined above)
    double cpg;
    int secs, check = 1;

    // Do-while loop that runs until the user manually selects to terminate the program
    do {
        // Prompt for and obtain user input for the cost per gallon of gas
        cout << "Enter the cost per gallon:" << endl;
        cin >> cpg;
        exxon.setCostPerGallon(cpg);     // Set the cost per gallon

        // Prompt for and obtain user input for the number of seconds gas will be dispensed
        cout << "Enter the number of seconds for which you wish to dispense gas:" << endl;
        cin >> secs;
        exxon.dispense(secs);     // Set the amount of gas dispensed and the amount of money charged

        cout << "Gallons Pumped: " << exxon.getAmountDispensed() << endl;     // Display the number of gallons pumped
        cout << "Cost per Gallon: $" << exxon.getCostPerGallon() << endl;     // Display the cost per gallon
        // Display the amount of money charged. Format to round and display output to two decimal places
        cout << "Total Cost: $" << std::fixed << std::setprecision(2) << exxon.getAmountCharged() << endl;

        exxon.reset();     // Reset the amount dispensed and amount charged since fueling is complete

        // Prompt for and obtain user input to determine if the program should restart or terminate
        cout << "Fueling completed. Enter 1 to start again. Press any other key to terminate the program." << endl;
        cin >> check;
    } while(check == 1);     // Loop condition

    return 0;     // Terminate the program
}
