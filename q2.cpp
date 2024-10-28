#include <iostream>

using namespace std;     // Standard name space

// Define a class of type Temperature
class Temperature {
private:     // Private variables
    double degreesKelvin,
           degreesFahrenheit,
           degreesCelsius;
public:     // Public functions
    void setTempKelvin(double kelvin) { degreesKelvin = kelvin; }     // Function to set the temperature in Kelvin
    double getTempKelvin() { return degreesKelvin; }     // Function to return the temperature in Kelvin
    void setTempCelsius() { degreesCelsius = degreesKelvin - 273.15; }     // Function to set the temperature in Celsius
    double getTempCelsius() { return degreesCelsius; }     // Function to return the temperature in Celsius
    void setTempFahrenheit() { degreesFahrenheit = (9.0 / 5) * degreesCelsius + 32; }     // Function to set the temperature in Fahrenheit
    double getTempFahrenheit() { return degreesFahrenheit; }     // Function to return the temperature in Fahrenheit
};

// Main function to test the above class definition
int main() {
    // Variables to be used in the remainder of main()
    double kelvin;
    Temperature wxData;     // variable wxData of type Temperature
    int check = 1;

    // Do-while loop that runs until the user manually selects to terminate the program
    do {
        // Prompt for and obtain user input for the temperate in Kelvin that is to be converted
        cout << "Enter the temperature in Kelvin: " << endl;
        cin >> kelvin;

        wxData.setTempKelvin(kelvin);     // Set the temperate in Kelvin
        wxData.setTempCelsius();     // Convert to Celsius and set the converted temperature
        wxData.setTempFahrenheit();     // Convert to Fahrenheit and set the converted temperature

        // Display the original value that is being converted
        cout << "Here are the converted temperature values for " << wxData.getTempKelvin() << "K:" << endl;
        // Display the corresponding value in Celsius
        cout << "Celsius: " << wxData.getTempCelsius() << endl;
        // Display the corresponding value in Fahrenheit
        cout << "Fahrenheit: " << wxData.getTempFahrenheit() << endl << endl;

        // Prompt for and obtain uer input to determine if the program should restart or terminate
        cout << "Enter 1 to convert another temperature value. Press any other key to terminate the program." << endl;
        cin >> check;
    } while(check == 1);     // Loop condition

    return 0;     // Terminate the program
}
