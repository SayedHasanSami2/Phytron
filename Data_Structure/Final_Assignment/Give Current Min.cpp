#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    priority_queue<int, vector<int>, greater<int>> prior_queue;

    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        prior_queue.push(x);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int Command;
        cin >> Command;

        if (Command == 0)
        {
            int value;
            cin >> value;
            prior_queue.push(value);
            cout << prior_queue.top() << endl;
        }
        else if (Command == 1)
        {
            if (prior_queue.empty())
                cout << "Empty" << endl;
            else
                cout << prior_queue.top() << endl;
        }
        else if (Command == 2)
        {
            if (prior_queue.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                prior_queue.pop();
                if (prior_queue.empty())
                    cout << "Empty" << endl;
                else
                    cout << prior_queue.top() << endl;
            }
        }
    }

    return 0;
}
