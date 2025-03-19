#include <iostream>
using namespace std;
class number{
private:
    int i, Sum=0;
public:
    number(){
        cout<<"Numbers that are divisible by 11 between 100 and 200\n";
        for(i=101; i<200; i++)
           if(i%11==0)
            {
                cout<<"Numbers divisble by 11 is= "<<i<<endl;
           Sum= Sum+i;
                        }
           }
           friend int in(number);
 };
           int in(number b)
           {
            cout<<"Sum of all numbers divisible by 11 is= "<<b.Sum<<endl;
                    }
 int main()
 {
     number b;
     in(b);
 }
