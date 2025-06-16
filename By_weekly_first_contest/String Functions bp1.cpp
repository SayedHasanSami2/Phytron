#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    while (q--) {
        string given;
        cin >> given;

        if (given == "pop_back") {
            s.pop_back();
        }
        else if (given == "front") {
            cout << s[0] << endl;
        }
        else if (given == "back") {
            cout << s[s.length() - 1] << endl;
        }
        else if (given == "push_back") {
            char x;
            cin >> x;
            s.push_back(x);
        }
        else if (given == "print") {
            int pos;
            cin >> pos;
            cout << s[pos - 1] << endl;
        }
        else if (given == "substr") {
            int l, r;
            cin >> l >> r;
            for (int i = l - 1; i <= r - 1; i++) {
                cout << s[i];
            }
            cout << endl;
        }
        else if (given == "sort") {
            int l, r;
            cin >> l >> r;
            sort(s.begin() + (l - 1), s.begin() + r);
        }
        else if (given == "reverse") {
            int l, r;
            cin >> l >> r;
            reverse(s.begin() + (l - 1), s.begin() + r);
        }
    }

    return 0;
}
