#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n, moves = 0;
    cin >> n;
    long long x[n];
    for (int i = 0; i < n; i++) cin >> x[i];
    for (int i = 1; i < n; i++){
        if (x[i] < x[i-1]){
            moves += x[i-1] - x[i];
            x[i] += x[i-1] - x[i];
        }
    }
    cout << moves;
}