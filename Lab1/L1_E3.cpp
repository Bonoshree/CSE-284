#include<iostream>
using namespace std;
class mytest{
private:
    int a,b,c;
public:
    void access_private(){
        cin>>a>>b>>c;
        cout<<a<<" "<<b<<" "<<c<<endl;
   }
};
int main(){
    mytest v;
    cin>>v.a>>v.b>>v.c;
    v.access_private();
}
