#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        if (n%400==0 || n%4==0 && n%100!=0) {cout << "Case " << i+1 << ": " << "a leap year" << "\n";}
        else {cout << "Case " << i+1 << ": " << "a normal year" << "\n";}
    }
}