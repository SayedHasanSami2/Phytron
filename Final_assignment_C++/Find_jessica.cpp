#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    getline(cin, S); 

    stringstream s(S);
    string word;
    bool found_jessica = false;

    while (s >> word) {
        if (word == "Jessica") {
            found_jessica = true;
            break;
        }
    }

    if(found_jessica == true)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}
