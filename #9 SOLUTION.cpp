/*Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
Up to 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit.*/
#include<iostream>
using namespace std;
class Bill
{
private:
    int x;
    float tot_charge;
public:
    void get()
    {
        cout<<"enter electricity usages in term unit :  ";
        cin>>x;
    }
    void calclateBill()
    {
        if(x<=100)
        {
            tot_charge=x*1.20;
            cout<< "Total Bill = "<<tot_charge;
        }
        else if(x>100 && x<=200 )
        {
            tot_charge=x*2;
            cout<< "Total Bill = "<<tot_charge;
        }
        else
              {
            tot_charge=x*3;
            cout<< "Total Bill = "<<tot_charge;
        }
    }
};
int main()
{
    Bill b;
    b.get();
    b.calclateBill();
    return 0;
}
