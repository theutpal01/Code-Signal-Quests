// Program to check whether a string is palindrome or not by user.
// Made by - Utpal

#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string inputString)
{
    for (int i = 0; i < inputString.size(); i++)
    {
        if (inputString[i] != inputString[(inputString.size() - 1) - i])
            return false;
    }
    return true;
}

int main()
{
    string word;
    cin >> word;
    cout << checkPalindrome(word);
    return 0;
}