#include <bits/stdc++.h>
using namespace std;

int maxNum(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    cout << maxNum(num1, num2) << endl;
    return 0;
}