#include <iostream>
using namespace std;

class Batsman {
private:
    int batsmanCode;
    string batsmanName;
    int totalInnings, notoutInnings, totalRuns;
    float battingAvg;

    // Function to calculate batting average
    void calcAvg() {
        if (totalInnings > notoutInnings) {
            battingAvg = (float)totalRuns / (totalInnings - notoutInnings);
        } else {
            battingAvg = 0;  // To handle division by zero
        }
    }

public:
    // Function to input data and calculate batting average
    void readData() {
        cout << "Enter Batsman Code: ";
        cin >> batsmanCode;
        cout << "Enter Batsman Name: ";
        cin >> batsmanName;
        cout << "Enter Total Innings: ";
        cin >> totalInnings;
        cout << "Enter Not Out Innings: ";
        cin >> notoutInnings;
        cout << "Enter Total Runs: ";
        cin >> totalRuns;
        calcAvg();  // Calculate the average
    }

    // Function to display data
    void displayData() {
        cout << "\nBatsman Code: " << batsmanCode;
        cout << "\nBatsman Name: " << batsmanName;
        cout << "\nTotal Innings: " << totalInnings;
        cout << "\nNot Out Innings: " << notoutInnings;
        cout << "\nTotal Runs: " << totalRuns;
        cout << "\nBatting Average: " << battingAvg << endl;
    }
};

int main() {
    Batsman b;
    b.readData();       // Input data
    b.displayData();    // Display data
    return 0;
}
