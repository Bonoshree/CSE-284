#include <iostream>
using namespace std;

// Base class
class Marks {
protected:
    int marks[5]; // Array to hold marks for 5 subjects
    string subjects[5] = {"Physics", "Chemistry", "Math", "Biology", "English"};

public:
    void getMarks() {
        for (int i = 0; i < 5; ++i) {
            cout << "Enter marks for " << subjects[i] << ": ";
            cin >> marks[i];
        }
    }
};

// First derived class to calculate total marks
class TotalMarks : public Marks {

public:
    int total;
    void calculateTotal() {
        total = 0;
        for (int i = 0; i < 5; ++i) {
            total += marks[i];
        }
    }
};

// Second derived class to calculate and display percentage
class Percentage : public TotalMarks {
public:
    void displayPercentage() {
        calculateTotal();
        float percentage =(total*100)/500;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    Percentage student;
    student.getMarks();         // Input marks
    student.displayPercentage(); // Calculate and display total and percentage
    return 0;
}
