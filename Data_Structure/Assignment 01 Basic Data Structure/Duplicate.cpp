#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }
    int flag = false;

    for (int i = 0; i < n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                flag = true;
                break;
            }
        }
    }
    if(flag == true)
    {
        cout<< "YES";
    }
    else
    {
        cout << "NO";
    }
    
    

    return 0;
}