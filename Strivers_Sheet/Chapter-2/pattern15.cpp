#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, k = 65;
    cin >> n;
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (char)(k + j - 1) << " ";
        }
        cout << endl;
    }

    return 0;
}