#include <bits/stdc++.h>
using namespace std;

double companyBotStrategy(vector<vector<int>> trainingData) {
    double sum = 0, counter = 0;
    for (int i = 0; i < trainingData.size(); i++)
    {
        if (trainingData[i][1] == 1)
        {
            sum += trainingData[i][0];
            counter++;
        }
    }
    if (sum > 0)
        return sum / counter;
    return 0;
}

int main()
{
    vector<vector<int>> trainingData{{3, 1}, {6, 1}, {4, 1}, {5, 1}};
    cout << companyBotStrategy(trainingData) << endl;
    return 0;
}