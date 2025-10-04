#include <bits/stdc++.h>
using namespace std;

/*
Take the age from the user and determine whether the person is eligible for job or not.

1. If age < 18, then print "You are not eligible for job"
2. If age >= 18 and age <= 57, then print "You are eligible for job"
3. If age > 57, then print "Retirement Time"
*/

int main()
{
    int age;
    cin >> age;
    if (age < 18)
    {
        cout << "You are not eligible for the job" << "\n";
    }
    else if (age <= 57)
    {
        cout << "You are eligible for the job ";
        if (age >= 55)
        {
            cout << "but retirement soon" << "\n";
        }
    }
    else
    {
        cout << "Retirement Time" << "\n";
    }
    return 0;
}