#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  for (int i = 1; i < N; i++) {
    for (int j = 0; j < N - i; j++) cout << " ";
    for (int j = 0; j < i * 2 - 1; j++) {
      if (j == 0 || j == i * 2 - 2)
        cout << "*";
      else
        cout << " ";
    }
    cout << endl;
  }
  for (int i = 0; i < N * 2 - 1; i++) cout << "*";
  return 0;
}