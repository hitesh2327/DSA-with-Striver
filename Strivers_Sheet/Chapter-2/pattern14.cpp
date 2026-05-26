#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 65; j < (65 + i); j++)
        {
            cout << (char)j << " ";
        }
        cout << endl;
    }

    return 0;
}