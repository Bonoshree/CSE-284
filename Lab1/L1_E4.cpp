#include<iostream>
using namespace std;
class box{
private:
    double length;
    double breadth;
    double height;
public:
    void initdata(double len,double brth,double hgt){
        length=len;
        breadth=brth;
        height=hgt;
    }
    double calculateArea(){
        return length*breadth;
    }
    double calculateVolume(){
        return length*breadth*height;
    }

};
int main(){
    box box1;
    box1.initdata(42.5,30.8,19.2);
    cout<<"Area of Box="<<box1.calculateArea()<<endl;
    cout<<"Volume of Box="<<box1.calculateVolume()<<endl;
    return 0;
}
