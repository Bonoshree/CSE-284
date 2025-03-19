#include<iostream>
using namespace std;
class Cube{
    int side;
public:
    ~Cube()
    {
        cout<<"Destructor Called";
    }
};
int main(){
    Cube c;
    //cout<<"Hello world."<<endl;
    return 0;
}
