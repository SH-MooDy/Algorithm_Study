#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  for (int i = 1; i <= N; i++) {
    for (int j = 0; j < N - i; j++) cout << " ";
    for (int j = 0; j < i; j++) {
      cout << "*";
      if (j < i - 1) cout << " ";
    }
    cout << endl;
  }
  return 0;
}