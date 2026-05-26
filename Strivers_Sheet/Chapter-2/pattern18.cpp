#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, k = 64;
    cin >> n;
    for (int i = n; i > 0; i--)
    {
        for (int j = i; j <= n; j++)
        {
            cout << (char)(j + k) << " ";
        }
        cout << endl;
    }

    return 0;
}