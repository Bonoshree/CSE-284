#include<iostream>
using namespace std;
class box{
public:
    double length,breadth,height;
    void input_value(){
        cout<<"Enter three sides of the box:"<<endl;
        cin>>length>>breadth>>height;
    }
    void print_value(){
        cout<<"Length:"<<length<<endl;
        cout<<"Breadth:"<<breadth<<endl;
        cout<<"Height:"<<height<<endl;
    }
    double volume(){
        double v=length*breadth*height;
        return v;

    }
};
int main(){
    box mybox;
    mybox.input_value();
    mybox.print_value();
    double vol=mybox.volume();
    cout<<"Volume of the box:"<<vol<<endl;
}
