#include <iostream>
#include <cmath>
using namespace std;
class number{
private:
    int n;
    bool isPrime(int num) {
        if (num <= 1) return false;
        for (int i = 2; i <= sqrt(num); i++) {
                if (num % i == 0) return false;
         }
         return true;
        }

public:
    number() {
        cout << "Enter a number to check if it can be expressed as the sum of two prime numbers: ";
        cin >> n;
        for (int i = 2; i <= n / 2; i++) {
                if (isPrime(i) && isPrime(n - i)) {
                    cout << n << " = " << i << " + " << n - i << endl;
                }
        }
    }
 friend void checkSum(number);
};
void checkSum(number r){
    bool found=false;
    for(int i=2; i<=r.n/2; i++){
        if (r.isPrime(i) && r.isPrime(r.n - i)) {
                found = true;
                break;
        }
    }
    if (!found) {
            cout << "The number " << r.n << " cannot be expressed as the sum of two prime numbers." << endl;
    }
}
int main(){
    number obj;
    checkSum(obj);
    return 0;
}

