#include<iostream>
using namespace std;
class box{
public:
    double length;
    double breadth;
    double height;
};
int main(){
    box box1;
    box box2;
    double volume;
    box1.height=5;
    box1.length=6;
    box1.breadth=7;

    box2.height=10;
    box2.length=12;
    box2.breadth=13;
    volume=box1.length*box1.breadth*box1.height;
    cout<<"Volume of the box 1: "<<volume<<endl;
    volume=box2.length*box2.breadth*box2.height;
    cout<<"Volume of the box 2: "<<volume<<endl;
    return 0;
    }
