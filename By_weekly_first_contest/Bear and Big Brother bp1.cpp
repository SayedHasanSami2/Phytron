#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int count = 0;

//    int limak,bob;
    while (a <= b)
    {
        a = a * 3;
        b = b * 2;
        count++;
    }
    cout << count;

    return 0;
}