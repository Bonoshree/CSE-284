#include<iostream>
using namespace std;
class Count{
private:
    int value;
public:
    Count(){
        value=8;
    }
    Count operator++(){
        Count temp;
        temp.value=++value;
        return temp;
    }
    Count operator++(int){
        Count temp;
        temp.value=value++;
        return temp;
    }
    void display(){
        cout<<"cout:"<<value<<endl;
    }
};
int main(){
    Count c1,result;
    result=++c1;
    result.display();
    result=c1++;
    result.display();
    return 0;
}
