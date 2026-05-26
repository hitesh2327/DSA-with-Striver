#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int m = n + (n - 1);
    for (int i = 1; i <= (n * 2); i++)
    {
        int o = i;
        if (i > n)
        {
            o = (n * 2) - i;
        }
        int space = m - (o + (o - 1));
        int k = space / 2;
        int astrisk = m - space;
        int l = k + astrisk;
        for (int j = 1; j <= m; j++)
        {
            if (j > k && j <= l)
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}