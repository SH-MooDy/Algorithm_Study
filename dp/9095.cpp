#include<iostream>
using namespace std;
int main(){
    int dp[12];
    int T,n;
    cin >> T;
    dp[1] = 1, dp[2] = 2, dp[3] = 4;
    for (int i = 0; i < T; i++) {
        cin >> n;
        if (n == 1) { 
            cout << 1 << endl;
            continue;
        }
        else if (n == 2) {
            cout << 2 << endl;
            continue;
        }
        else if (n == 3) {
            cout << 4 << endl;
            continue;
        }
        for (int j = 4; j <= n; j++) {
            dp[j] = dp[j - 3] + dp[j - 2] + dp[j - 1];
        }
        cout << dp[n] << endl;
    }
    return 0;
}