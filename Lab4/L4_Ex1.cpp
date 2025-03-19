#include<iostream>
using namespace std;
class Base{
protected:
    int num1,num2;
public:
    void setnum1(int n1){
        num1=n1;
    }
    void setnum2(int n2){
        num2=n2;
    }
};
class Derived : public Base {
public:
    void displaySum() {
        int sum = num1 + num2;
        cout << "The sum of the two numbers is: " << sum << endl;
    }
};
int main(){
    Derived d1;
    d1.setnum1(9);
    d1.setnum2(63);
    d1.displaySum();
    return 0;
}
