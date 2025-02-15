#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }
    else if (n == 2) {
        cout << 2 << endl;
        return 0;
    }
    vector<int> dp(n + 1);
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
    }
    cout << dp[n] << endl;
    return 0;
}