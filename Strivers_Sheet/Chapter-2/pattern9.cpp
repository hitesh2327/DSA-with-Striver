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
        // If you want to print the lower half of the pattern, then
        // you have to change the value of o according to the value of i.
        if (i > n)
        {
            o = (n * 2) - i + 1; // if you want to print the lower half of the pattern as same as upper half then put +1,
                                 // if you want to print the lower half of the pattern as one less than upper half then remove +1.
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
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}