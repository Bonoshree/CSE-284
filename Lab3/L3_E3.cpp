#include<iostream>
using namespace std;
void print(int var){
    cout<<"Integer number:"<<var<<endl;
}
void print(float var){
    cout<<"Float number:"<<var<<endl;
}
void print(int var1,float var2){
    cout<<"Integer number:"<<var1;
    cout<<"\nand float number:"<<var2;
}
int main(){
int a=4;
float b=3.5;
print(a);
print(b);
print(a,b);
return 0;

}
