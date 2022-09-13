/*Define a class Date and write a program to Display Date and initialize date object
using Constructors*/
#include<iostream>
using namespace std;
class Date
{
private:
    int h,m,s;
public:
    Date(int hr, int min, int sec)
    {
      h=hr;
      m=min;
      s=sec;
    }
    void showData()
    {
        cout<<h<<"hrs " << m<< "min "<<s<< "sec ";
    }
};
int main()
{
    Date d(3 ,25 ,50);
    d.showData();
    return 0;
}
