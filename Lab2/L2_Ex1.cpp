#include <iostream>
using namespace std;

class AddMoney{
private:
    int amount;
public:
    AddMoney(){
        amount=500;
   }
   AddMoney(int addAmount){
       amount=500+addAmount;
   }
   void displayAmount(){
       cout<<"Final amount in the savings account:"<<amount<<endl;
   }
};
int main()
{
    AddMoney account1;
    account1.displayAmount();
    AddMoney account2(400);
    account2.displayAmount();
    return 0;
}
