#include <bits/stdc++.h>
using namespace std;

int FactorialChallenge(int n) {
    int ans = 1;
    for (int i = n; i > 1; i--)
    {
        ans *= i;
    }
    return ans;
}


int main() {
    int n;
    cin >> n;
    cout << FactorialChallenge(n);
    return 0;
}