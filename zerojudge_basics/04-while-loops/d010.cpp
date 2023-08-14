#include <iostream>
using namespace std;

int main(){
    int n;
    while (cin >> n){
        int s = 0;
        for (int i = 1; i < n; i++){
            if (n % i == 0){
                s += i;
            }
        }
        if (s > n) cout << "盈數" << "\n";
        else if (s < n) cout << "虧數" << "\n";
        else cout << "完全數" << "\n";
    }
}