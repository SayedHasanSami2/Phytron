#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int space1 = 0, space2 = n - 2;

    for (int i = 0; i < n / 2; i++) // for printing line
    {
        for (int j = 0; j < space1; j++) // for printing 1st space
        {
            cout << " ";
        }

        cout << "\\";

        for (int k = 0; k < space2; k++)
        {
            cout << " ";
        }

        cout << "/";

        space1++;
        space2 -= 2;
        cout << endl;
    }

    for (int l = 0; l < n / 2; l++) // for printing x line space
    {
        cout << " ";
    }

    cout << "X";

    cout << endl;
    // 2nd part
    int space3 = 1;
    int space_fst = (n / 2) - 1;

    for (int m = 0; m < n / 2; m++) // printing line
    {
        for (int o = 0; o < space_fst; o++) // printing first space;
        {
            cout << " ";
        }
        cout << "/";
        for (int p = 0; p < space3; p++)
        {
            cout << " ";
        }
        cout << "\\";

        space3 += 2;
        space_fst--;
        cout << endl;
    }

    return 0;
}