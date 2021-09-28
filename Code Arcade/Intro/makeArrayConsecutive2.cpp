#include <bits/stdc++.h>
using namespace std;

int makeArrayConsecutive2(vector<int> statues)
{
    int counter = 0;
    sort(statues.begin(), statues.end());
    for (int i = 1; i < statues.size(); i++)
    {
        if (statues[i - 1] + 1 != statues[i])
        {
            statues.insert(statues.begin() + i, (statues[i-1] + 1));
            counter++;
        }
    }
    return counter;
}

int main()
{
    vector<int> statues{6, 2, 3, 8};
    cout << makeArrayConsecutive2(statues) << endl;
    return 0;
}