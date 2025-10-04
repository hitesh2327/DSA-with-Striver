#include <bits/stdc++.h>
using namespace std;

// Pass by Value - Function
void passByValue(int a)
{
    cout << a << endl;
    a += 10;
    cout << a << endl;
    a += 10;
    cout << a << endl;
}

// Pass by Reference - Function
void passByReference(int &a)
{
    cout << a << endl;
    a += 10;
    cout << a << endl;
    a += 10;
    cout << a << endl;
}

int main()
{
    int a = 10;
    passByValue(a);
    cout << a << endl; // Value of a will remain unchanged
    passByReference(a);
    cout << "Value Updated as now it is updated by the function where I passed the reference of the value, not the value. " << a << endl; // Value of a will be changed
    return 0;
}