#include <iostream>
using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int max = 0;

    for (int i = 0; i * a <= n; i++)
    {
        for (int j = 0; i * a + j * b <= n; j++)
        {
            int used = i * a + j * b;
            int left = n - used;

            if (left % c == 0)
            {
                int k = left / c;
                int total = i + j + k;
                if (total > max)
                {
                    max = total;
                }
            }
        }
    }

    cout << max << endl;
    return 0;
}
