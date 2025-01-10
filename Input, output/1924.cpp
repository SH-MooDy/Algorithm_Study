#include<iostream>
using namespace std;

int main() {
    int x, y;
    int month_arr[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    string week[] = { "SUN", "MON","TUE", "WED", "THU", "FRI", "SAT"};
    cin >> x >> y;
    int month=0;

    for (int i = 0; i < x-1; i++) {
        month += month_arr[i];
    }
    month += y;
    cout << week[month % 7] << endl;
    return 0;
}