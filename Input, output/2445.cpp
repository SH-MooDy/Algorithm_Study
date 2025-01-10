#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 1; i <= N ; i++) {
        for (int j = 0; j < i; j++)
            cout << "*";
        for (int j = N * 2 - i * 2; j > 0; j--)
            cout << " ";
        for (int j = 0; j < i; j++)
            cout << "*";
        cout << endl;
    } 
    for (int i = 1; i <= N; i++) {
        for (int j = N; j > i; j--)
            cout << "*";
        for (int j = i * 2; j > 0; j--)
            cout << " ";
        for (int j = N; j > i; j--)
            cout << "*";
        cout << endl;
    }
    return 0;
}