#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    string s;
    int id;
    int math_marks;
    int eng_marks;
};
bool cmp(Student l, Student r)
{
    if (l.eng_marks + l.math_marks > r.eng_marks + r.math_marks)
    {
        return true;
    }
    else if (l.eng_marks + l.math_marks < r.eng_marks + r.math_marks)
    {
        return false;
    }
    else
    {
        if (l.id < r.id)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    int n;
    cin >> n;

    Student arr[n];
    for (int k = 0; k < n; k++)
    {
        cin >> arr[k].nm >> arr[k].cls >> arr[k].s >> arr[k].id >> arr[k].math_marks >> arr[k].eng_marks;
    }

    sort(arr, arr + n, cmp);

    for (int k = 0; k < n; k++)
    {
        cout << arr[k].nm << " " << arr[k].cls << " " << arr[k].s << " " << arr[k].id <<" " << arr[k].math_marks << " " << arr[k].eng_marks << " " << endl;
    }

    return 0;
}