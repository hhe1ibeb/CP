#include <iostream>
using namespace std;

int f91(int a){
    if (a >= 101) return a - 10;
    else return f91(f91(a+11));
}

int main(){
    int n = 1;
    while(1){
        cin >> n;
        if (n == 0) break;
        cout << "f91(" << n << ") = " << f91(n) << "\n";
    }
}