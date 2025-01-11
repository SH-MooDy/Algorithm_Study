#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int A[1000];
  int dp[1000];
  int N;

  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> A[i];
    dp[i] = 1;
  }

  for (int i = 1; i < N; i++) {
    int maxNum = 0;
    for (int j = 0; j < i; j++) {
      if (A[j] < A[i]) {
        maxNum = max(maxNum, dp[j]);
      }
    }
  }

  int result = 0;
  for (int i = 0; i < N; i++) {
    result = max(result, dp[i]);
  }

  cout << result << endl;
  return 0;
}