// Program to get maximum two adjacent element from given vector by user.
// Made by - Utpal

#include <bits/stdc++.h>
using namespace std;

int adjacentElementsProduct(vector<int> inputArray)
{
    int product = INT_MIN;
    for (int i = 1; i < inputArray.size(); i++)
    {
        if ((inputArray[i-1] * inputArray[i]) > product)
        {
            product = (inputArray[i - 1] * inputArray[i]);
        }
    }

    return product;
}

int main()
{
    vector<int> arr {3, 6, -2, -5, 7, 3};
    cout << adjacentElementsProduct(arr) << endl;
    return 0;
}