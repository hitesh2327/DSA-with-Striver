#include <bits/stdc++.h>

int main()
{
    int age;
    std::cin >> age;
    if (age >= 18)
    {
        std::cout << "You can vote" << std::endl;
    }
    else
    {
        std::cout << "You can't vote" << std::endl;
    }
}