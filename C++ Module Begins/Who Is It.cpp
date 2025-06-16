#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char section;
    int marks;
};

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    string rslt[t];

    for (int test = 0; test < t; test++)
    {
        Student students[3];

        for (int i = 0; i < 3; i++)
        {
            cin >> students[i].id >> students[i].name >> students[i].section >> students[i].marks;
        }

        Student *max = &students[0];

        for (int i = 1; i < 3; i++)
        {
            if (students[i].marks > max->marks ||
                (students[i].marks == max->marks && students[i].id < max->id))
            {
                max = &students[i];
            }
        }

        rslt[test] = to_string(max->id) + " " + max->name + " " + max->section + " " + to_string(max->marks);
    }

    for (int i = 0; i < t; i++)
    {
        cout << rslt[i] << endl;
    }

    return 0;
}
