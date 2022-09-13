/*Define a class Bank and define member functions to read principal , rate of interest
and year. Another member functions to calculate simple interest and display it.
Initialize all details using constructor*/
#include<iostream>
using namespace std;
class Bank
{
    private:
    int p,n;
    float r;
    public:
        Bank()
        {
            cout<< "enter principle amount : ";
            cin>>p;
            cout<< "enter time : ";
            cin>>n;
            cout<< "enter rate : ";
            cin>>r;

        }
        void simple_interest()
        {
            float tot;
            tot=(p*n*r)/100;
            cout<< "Total simple interest = "<<tot;
        }

};
int main()
{
    Bank b;
    b.simple_interest();
    return 0;
}
