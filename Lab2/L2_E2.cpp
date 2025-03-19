#include<iostream>
using namespace std;
class Rectangle{
private:
    double length;
    double height;
public:
    Rectangle(double len,double hgt){
    length=len;
    height=hgt;
    }
    double calculateArea(){
        return length*height;
   }
};
int main(){
    Rectangle rect1(10,20);
    Rectangle rect2(30,40);
    cout<<"Area of rectangle1:"<<rect1.calculateArea()<<endl;
    cout<<"Area of rectangle2:"<<rect2.calculateArea()<<endl;
     return 0;
}
