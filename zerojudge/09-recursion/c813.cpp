#include <iostream>
using namespace std;

int f(int a){
    if (a < 10) return a;
    int sum = 0;
    while(a > 0){
        sum += a%10;
        a /= 10;
    }
    return f(sum);
}

int main(){
    int n;
    while(1){
        cin >> n;
        if (n==0) break;
        cout << f(n) << "\n";
    }
}