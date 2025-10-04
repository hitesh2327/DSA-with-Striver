#include <bits/stdc++.h>
using namespace std;

/*
Take the  day no as input and print the corresponding day of the week.
1 - Monday
2 - Tuesday
3 - Wednesday
4 - Thursday
5 - Friday
6 - Saturday
7 - Sunday
Any other number - Invalid day
*/
int main()
{
    int day;
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Monday" << "\n";
        break;
    case 2:
        cout << "Tuesday" << "\n";
        break;
    case 3:
        cout << "Wednesday" << "\n";
        break;
    case 4:
        cout << "Thursday" << "\n";
        break;
    case 5:
        cout << "Friday" << "\n";
        break;
    case 6:
        cout << "Saturday" << "\n";
        break;
    case 7:
        cout << "Sunday" << "\n";
        break;
    default:
        cout << "Invalid day" << "\n";
        break;
    }
    return 0;
}