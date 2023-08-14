#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int d = b*b - 4*a*c;
    if(d == 0) cout << "Two same roots x=" << (-b + sqrt(d)) / (a*2);
    else if (d > 0) cout << "Two different roots x1=" << (-b + sqrt(d)) / (a*2) << " , x2=" << (-b - sqrt(d)) / (a*2);
    else cout << "No real root";
}