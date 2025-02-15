#include <iostream>
using namespace std;
int main() {
  int dp[101][10] = {0};
  int N;
  cin >> N;
  long long num = 1000000000, sum = 0;
  for (int i = 1; i < 10; i++) {
    dp[1][i] = 1;
  }
  for (int i = 2; i <= N; i++) {
    for (int j = 0; j < 10; j++) {
      if (j == 0) {
        dp[i][0] = (dp[i - 1][1]) % num;
      } else if (j == 9) {
        dp[i][9] = (dp[i - 1][8]) % num;
      } else {
        dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % num;
      }
    }
  }
  for (int i = 0; i < 10; i++) {
    sum += dp[N][i];
    sum %= num;
  }
  cout << sum << endl;
  return 0;
}