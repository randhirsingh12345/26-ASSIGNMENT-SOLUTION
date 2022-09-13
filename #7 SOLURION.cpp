/*Define a class Box and write a program to enter length, breadth and height and
initialize objects using constructor also define member functions to calculate volume
of the box.*/
#include<iostream>
using namespace std;
class Box
{
    private :
        int l,b,h;
    public:
        Box()
        {
            cout<< "enter length ,breath and height :  ";
            cin>>l>>b>>h;

        }
        void volume()
        {
            cout<< "Volume of Box : "<<l*b*h;

        }

};
int main()
{
    Box v;
    v.volume();
    return 0;
}
