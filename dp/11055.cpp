#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int N;
  int A[1000];
  int dp[1000];

  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  // DP 배열 초기화
  for (int i = 0; i < N; i++) {
    dp[i] = A[i];
  }

  // DP 점화식 계산
  for (int i = 1; i < N; i++) {
    for (int j = 0; j < i; j++) {
      if (A[j] < A[i]) {
        dp[i] = max(dp[i], dp[j] + A[i]);
      }
    }
  }

  // 최댓값 찾기
  int result = 0;
  for (int i = 0; i < N; i++) {
    result = max(result, dp[i]);
  }

  cout << result << endl;
  return 0;
}
