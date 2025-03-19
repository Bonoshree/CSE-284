#include<iostream>
using namespace std;
class Complex{
private:
    float real;
    float img;
public:
    Complex(){
        real=0;
        img=0;
    }
    void input(){
        cout<<"Enter real and imaginary parts respectively:";
        cin>>real;
        cin>>img;
    }
    Complex operator+(Complex c){
        Complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
    void output(){
        if(img<0)
            cout<<"Output complex number:"<<real<<"-"<<img<<"i";
        else
            cout<<"Output complex number:"<<real<<"+"<<img<<"i";
    }
};
int main(){
    Complex c1,c2,result;
    cout<<"Enter first complex number:\n";
    c1.input();
    cout<<"Enter second complex number:\n";
    c2.input();
    result=c1+c2;
    result.output();
    return 0;
}
