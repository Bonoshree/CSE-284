#include<iostream>
using namespace std;
class student{
private:
    int a;
    int b;
    static int c;
public:
    student(){
        c++;
    }
    void X(int xx){
        a=xx;
        cout<<"The value of the 1st variable:"<<a<<endl;
    }
    void Y(int yy){
        b=yy;
        cout<<"The value of the 2nd variable:"<<b<<endl;
    }
    static int getc(){
        return c;
    }
};
int student::c=10;
int main(){
    int d=1,e=2;
    student s1;
    s1.X(10);
    s1.Y(11);
    cout<<"The number:"<<student::getc()<<endl;

    student s2;
    s2.Y(12);
    s2.X(15);
    cout<<"The number:"<<student::getc()<<endl;
    student s3;
    s3.X(13);
    s3.Y(17);
    cout<<"The number:"<<student::getc()<<endl;


    return 0;
}
