#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> linklist;
    int value;

    while (cin >> value && value != -1)
    {
        linklist.push_back(value);
    }

    linklist.sort();
    linklist.unique();

    for (int results : linklist)
    {
        cout << results << " ";
    }

    return 0;
}
