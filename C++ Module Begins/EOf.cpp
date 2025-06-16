#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    double x;
   
    while ( cin >> x)
    {
       cout << fixed<< setprecision(3) << x << endl;
    }
    
}