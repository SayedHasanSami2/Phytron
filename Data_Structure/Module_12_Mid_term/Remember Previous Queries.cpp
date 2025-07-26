#include <bits/stdc++.h>
using namespace std;

void print_The_List(list<int> &list)
{
    cout << "L -> ";
    for (int val : list)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << "R -> ";
    for (auto it = list.rbegin(); it != list.rend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void remember_Queries(list<int> &list,int q)
{

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            list.push_front(v);
        }
        else if (x == 1)
        {
            list.push_back(v);
        }
        else if (x == 2)
        {
            if (v < 0 || v >= list.size())
            {
                //
            }
            else
            {
                auto it = list.begin();
                advance(it, v);
                list.erase(it);
            }
        }

        print_The_List(list);
    }

}

int main()
{
    int q;
    cin >> q;

    list<int> list;
    remember_Queries(list,q);

    

    return 0;
}
