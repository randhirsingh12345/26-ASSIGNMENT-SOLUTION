/*Define a class Time to represent a time with instance variables h,m and s to store
hour, minute and second. Also define following member functions
a. void setTime(int,int,int)
b. void showTime()
c. void normalize()
d. Time add(Time)*/
#include<iostream>
using namespace std;
class Time
{
   private:
       int h,m,s;
   public:
        void setTime(int x ,int y, int z)
        {
            h=x;
            m=y;
            s=z;
        }
        void showTime()
        {
            cout<<"\n"<<h<<"hours " << m<< "minute "<<s << "second ";
        }
        void normalize()
        {

        }
        Time add(Time t)
        {
            Time temp;
            temp.h=h+t.h;
            temp.m=m+t.m;
            temp.s=s+t.s;
            return temp;
        }

};
int main()
{
    Time t1,t2,t3;
    t1.setTime(3,20,15);
    t2.setTime(1,30,35);
    t1.showTime();
    t2.showTime();
    t3=t1.add(t2);
    t3.showTime();
    return 0;
}
