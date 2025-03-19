#include <iostream>
using namespace std;

class Number {
private:
    int value; // Private data member

    // Friend function declaration inside private
    friend int displayReverse(Number n);

public:
    // Constructor to initialize the number
    Number(int v) {
        value = v;
    }
};

// Friend function definition
int displayReverse(Number n) {
    int reverse = 0;

    // Reverse the number
    while (n.value > 0) {
        reverse = reverse * 10 + n.value % 10;
        n.value /= 10;
    }

    // Display the reversed number
    cout << "Reversed number: " << reverse << endl;
}

int main() {
    int num;

    // Input number from the user
    cout << "Enter a number: ";
    cin >> num;

    // Create a Number object
    Number obj(num);

    // Call the friend function to display the reverse
    displayReverse(obj);

    return 0;
}
