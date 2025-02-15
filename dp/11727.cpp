#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> dp(n + 1);
    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }
    else if (n == 2) {
        cout << 3 << endl;
        return 0;
    }
    dp[1] = 1;
    dp[2] = 3;
    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i - 1]  + dp[i - 2]*2) % 10007;
    }
    cout << dp[n] << endl;
    return 0;
}