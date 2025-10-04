#include <bits/stdc++.h>
using namespace std;

// Without Parameter and Without Return Type
void printName()
{
    cout << " hey Hitesh Lalwani!" << endl;
}

// With Parameter and Without Return Type
void printName(string name)
{
    cout << name << endl;
}

int main()
{
    string name;
    getline(cin, name);
    printName();
    printName("Jai Siya Ram");
    printName(name);
    return 0;
}