#include <bits/stdc++.h>
using namespace std;

int shapeArea(int n)
{
    return (pow(n, 2) + pow((n - 1), 2));
}

int main()
{
    int n;
    cin >> n;
    cout << shapeArea(n);
    return 0;
}