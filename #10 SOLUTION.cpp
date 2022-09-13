/*Define a class StaticCount and create a static variable. Increment this variable in a
function and call this 3 times and display the result*/
#include<iostream>
using namespace std;
class StaticCount
{
private :
    static int k;
public:
    void increment()
    {
        k++;
        cout<<"\nk= "<<k;
    }
};
int StaticCount :: k;
int main()
{
     StaticCount c;
     c.increment();
     c.increment();
     c.increment();
     return 0;
}
