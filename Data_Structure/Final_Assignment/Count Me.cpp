#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    cin.ignore();

    while (test--)
    {
        string sentence;
        getline(cin, sentence);

        stringstream ss(sentence);
        string token;
        unordered_map<string, int> wordCount;

        string mostFrequentWord;
        int highestFreq = 0;

        while (ss >> token)
        {
            wordCount[token]++;

            if (wordCount[token] > highestFreq)
            {
                highestFreq = wordCount[token];
                mostFrequentWord = token;
            }
        }

        cout << mostFrequentWord << " " << highestFreq << "\n";
    }

    return 0;
}
