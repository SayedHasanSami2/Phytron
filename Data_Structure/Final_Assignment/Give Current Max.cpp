#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    Student() {}

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class Compare_Stdnts
{
public:
    bool operator()(const Student &a, const Student &b) const
    {
        if (a.marks != b.marks)
            return a.marks > b.marks;
        return a.roll < b.roll;
    }
};

int main()
{

    int n;
    cin >> n;
    set<Student, Compare_Stdnts> stds;

    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        stds.insert(Student(name, roll, marks));
    }

    int Q;
    cin >> Q;
    while (Q--)
    {
        int command;
        cin >> command;

        if (command == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            stds.insert(Student(name, roll, marks));
            if (!stds.empty())
            {
                auto it = stds.begin();
                cout << it->name << " " << it->roll << " " << it->marks << "\n";
            }
            else
            {
                cout << "Empty\n";
            }
        }
        else if (command == 1)
        {
            if (!stds.empty())
            {
                auto it = stds.begin();
                cout << it->name << " " << it->roll << " " << it->marks << "\n";
            }
            else
            {
                cout << "Empty\n";
            }
        }
        else if (command == 2)
        {
            if (!stds.empty())
            {
                stds.erase(stds.begin());
                if (!stds.empty())
                {
                    auto it = stds.begin();
                    cout << it->name << " " << it->roll << " " << it->marks << "\n";
                }
                else
                {
                    cout << "Empty\n";
                }
            }
            else
            {
                cout << "Empty\n";
            }
        }
    }

    return 0;
}
