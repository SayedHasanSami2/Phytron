#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    string s;
    int id;
};

int main()
{
    int n;
    cin >> n;

    Student arr[n];
    for (int k = 0; k < n; k++)
    {
        cin >> arr[k].nm >> arr[k].cls >> arr[k].s >> arr[k].id;
    }

    int i = 0, j = n - 1;

    while (i < j)
    {
        string temp = arr[i].s;
        arr[i].s = arr[j].s;
        arr[j].s = temp;

        i++;
        j--;
    }

    for (int k = 0; k < n; k++)
    {
        cout << arr[k].nm << " " << arr[k].cls << " " << arr[k].s << " " << arr[k].id << endl;
    }

    return 0;
}