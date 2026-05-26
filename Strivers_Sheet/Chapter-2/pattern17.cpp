#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, k = 64;
    cin >> n;
    int m = (n * 2) - 1;
    for (int i = 1; i <= n; i++)
    {
        int letterCount = 2 * i - 1;
        int restartIndex = letterCount / 2;
        int space = (m - letterCount) / 2;
        int a = 1;
        bool isRestart = false;

        for (int j = 1; j <= m; j++)
        {
            if (j > space && j <= (space + letterCount))
            {
                cout << (char)(k + a);
                if (restartIndex > 0)
                {
                    if (a <= restartIndex && !isRestart)
                    {
                        a++;
                    }
                    else
                    {
                        isRestart = true;
                        a--;
                    }
                }
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