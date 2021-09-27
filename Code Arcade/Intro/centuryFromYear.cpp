// Program to get century from given year by user.
// Made by - Utpal

#include <bits/stdc++.h>
using namespace std;

int centuryFromYear(int year)
{
    if (year <= 100)
        return 1;
    else if (to_string(year).substr(to_string(year).length() - 2) == "00")
        return int(year / 100);
    else
        return ((int(year / 100)) + 1);
}

int main()
{
    int year;
    cin >> year;

    cout << centuryFromYear(year);

    return 0;
}