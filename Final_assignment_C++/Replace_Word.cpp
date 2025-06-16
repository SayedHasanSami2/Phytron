#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    cin.ignore();

    while (T--)
    {
        string S, X;
        getline(cin, S, ' ');
        getline(cin, X);

        int current = 0;
        while ((current = S.find(X, current)) != -1)
        {
            S.replace(current, X.length(), "#");
            current += 1;
        }

        cout << S << endl;
    }
    return 0;
}