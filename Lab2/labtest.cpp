#include<iostream>
using namespace std;
class Student{
private:
    double a,b,c;
public:
    Student(){
        a=1;
        b=2;
        c=3;
        cout<<"Values:"<<a<<endl<<b<<endl<<c<<endl;
    }
    Student(double aa,double bb,double cc){
        a=aa;
        b=bb;
        c=cc;
        cout<<"Values:"<<a<<endl<<b<<endl<<c;
    }

};
int main(){
    Student s1;
    Student s2(10,20,30);
    return 0;
}
