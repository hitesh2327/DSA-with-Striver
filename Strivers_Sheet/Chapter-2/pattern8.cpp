#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int m = n + (n - 1);
    for (int i = n; i >= 1; i--)
    {
        int space = m - (i + (i - 1));
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
        //  for(int j=1;j<=k;j++){
        //     cout<<" ";
        // }
        // for(int j=1;j<=astrisk;j++){
        //     cout<<"*";
        // }
        //  for(int j=1;j<=k;j++){
        //     cout<<" ";
        // }
        cout << endl;
    }

    return 0;
}