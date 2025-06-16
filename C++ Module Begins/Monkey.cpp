#include <bits/stdc++.h>
using namespace std;

int main() {
    string input[1000];   
    string output[1000];
    int count = 0;

    string size;
    while (getline(cin, size)) {
        input[count++] = size;
    }

    for (int i = 0; i < count; i++) {
        string temp = "";
        for (int j = 0; j < input[i].size(); j++) {
            if (input[i][j] != ' ') {
                temp += input[i][j];
            }
        }
        sort(temp.begin(), temp.end());
        output[i] = temp;
    }

    for (int i = 0; i < count; i++) {
        cout << output[i] << endl;
    }

    return 0;
}
