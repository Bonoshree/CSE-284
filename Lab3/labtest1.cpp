#include<iostream>
#include<string>
using namespace std;
class employee{
private:
    double b_pay,y_exp,m_allw,h_allw,b_yr;
public:
    employee(){
        b_pay=y_exp=m_allw=h_allw=b_yr=0;
    }
    void getdata(){
        cout<<"Basic pay:";
        cin>>b_pay;
        cout<<"Years of experience:";
        cin>>y_exp;
        cout<<"Medical Alowance:";
        cin>>m_allw;
        cout<<"House allowance:";
        cin>>h_allw;
        cout<<"Bouns per year:";
        cin>>b_yr;
    }
    friend void tax_calc(employee e);
};
void tax_calc(employee e){
    int gross_pay;
    gross_pay=12*(e.b_pay+e.m_allw+e.h_allw)+(e.b_yr*e.y_exp);
    int tax;
    if(gross_pay>500000)
        (tax=gross_pay*0.1);
    else{
        tax=0;
    }
    cout<<"Gross pay:"<<gross_pay<<endl;
    cout<<"Tax amount:"<<tax<<endl;
}
int main(){
    employee e1;
    e1.getdata();
    tax_calc(e1);
    return 0;
}
