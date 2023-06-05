#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n%400==0 || n%4==0 && n%100!=0) {cout << "a leap year";}
    else {cout << "a normal year";}
}