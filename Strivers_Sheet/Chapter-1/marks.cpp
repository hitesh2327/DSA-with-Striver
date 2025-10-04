#include <bits/stdc++.h>
using namespace std;

/*
A school has following rules for the grading system:
1. Below 25 - F
2. 25 to 45 - E
3. 45 to 50 - D
4. 50 to 60 - C
5. 60 to 80 - B
6. Above 80 - A
Your program should take an input from the user (marks scored in an exam) and output the
corresponding grade.
*/

int main()
{
    int marks;
    cin >> marks;
    if (marks < 0 || marks > 100)
    {
        cout << "Invalid marks" << "\n";
        return 0;
    }
    if (marks < 25)
    {
        cout << "Fail" << "\n";
    }
    else if (marks >= 25 && marks < 45)
    {
        cout << "E" << "\n";
    }
    else if (marks >= 45 && marks < 50)
    {
        cout << "D" << "\n";
    }
    else if (marks >= 50 && marks < 60)
    {
        cout << "C" << "\n";
    }
    else if (marks >= 60 && marks < 80)
    {
        cout << "B" << "\n";
    }
    else
    {
        cout << "A" << "\n";
    }

    return 0;
}