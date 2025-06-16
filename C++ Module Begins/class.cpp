#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    char name [100];
    int roll;
    int CGPA;


};
int main()
{
    Student a,b;
    cin.getline(a.name,100);
    cin>> a.roll >> a.CGPA;

    cin.ignore();
    cin.getline(b.name,100);
    cin>> b.roll >> b.CGPA;

    cout << a.name << " " << a.roll << " " << a.CGPA;
    cout << b.name << " " << b.roll << " " << b.CGPA;

    return 0;
}