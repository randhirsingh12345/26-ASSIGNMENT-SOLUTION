//Define a class Cube and calculate Volume of Cube and initialize it using constructor
#include<iostream>
using namespace std;
class cube
{
    private:
           int c;
    public:
        cube(int x)
        {
            c=x;
        }
        void volume()
        {
            cout<< "volume of cube is "<<c*c*c;
        }
};
int main()
{
    cube v(5);
    v.volume();
    return 0;
}
