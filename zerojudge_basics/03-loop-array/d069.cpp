#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (cin >> n){
        if (n%400==0 || n%4==0 && n%100!=0) {cout << "a leap year" << "\n";}
        else {cout << "a normal year" << "\n";}
    }
}