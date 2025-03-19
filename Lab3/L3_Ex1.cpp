#include <iostream>
#include <string>
using namespace std;

class Batsman {
private:
    int batsmanID;       // 6-digit roll number (though not used in input)
    string name;         // To store batsman name
    static int count;    // Static variable to track number of objects

public:
    // Constructor
    Batsman() {
        count++;  // Increment count when a new object is created
    }

    // Static function to return count of objects
    static int getCount() {
        return count;
    }

    // Function to take batsman name as input
    void getName() {
        cout << "Enter Batsman Name: ";
        cin >> name;
    }

    // Function to show batsman name
    void showName() {
        cout << "Batsman Name: " << name << endl;
    }
};

// Initialize static member count to 0
int Batsman::count = 0;

int main() {
    // Initially number of objects
    cout << "Initially number of objects: " << Batsman::getCount() << endl;

    int n;
    cout << "Enter number of entry: ";
    cin >> n;
    // Create an array of Batsman objects based on user input
    Batsman batsmen[n];

    // Get name for each batsman
    for (int i = 0; i < n; i++) {
        batsmen[i].getName();
    }

    // Show names of each batsman
    for (int i = 0; i < n; i++) {
        batsmen[i].showName();
    }

    // Finally number of objects
    cout << "Finally number of objects: " << Batsman::getCount() << endl;

    return 0;
}
