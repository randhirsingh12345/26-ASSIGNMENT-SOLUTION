/*Define a class student and write a program to enter student details using constructor
and define member function to display all the details*/
#include<iostream>
using namespace std;
class student
{
    private:
    int roll,age;
    char name[20],course[10];
    public:
        student()
        {
            cout<<"enter name : ";
            cin.getline(name,20);
            cout<<"enter course : ";
            cin.getline(course,10);
            cout<<"enter roll number : ";
            cin>>roll;
            cout<< "enter age : ";
            cin>>age;
            cout<<endl<<endl;
        }
        void showdata()
        {
            cout<<"<- STUDENT'S DETAILS ->\n\n";
            cout<< "Name -> "<<name<<"\nCourse -> "<<course<<"\nRoll_Num. -> "<<roll<<"\nAge -> "<<age;
        }
};
int main()
{
    student s;
    s.showdata();
}
