#include<bits/stdc++.h>
using namespace std;

class Student
{
    public :
    string name;
    int roll;
    int marks;

};
int main()
{
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }
    // int min_marks = INT_MAX;
    
    // for (int  i = 0; i < n; i++)
    // {
    //    min_marks = min(arr[i].marks,min_marks);
    // }

    // cout << "Minimum Marks: " << min_marks << endl;   just minimum marks printing


    Student min;
    min.marks = INT_MAX;
    for (int i = 0; i < n; i++){
        if( arr[i].marks < min.marks){
            min = arr[i];
        }
    }
    cout << min.name << " " << min.roll << " " << min.marks << endl; // printing the student with minimum marks
    
    
    return 0;
}