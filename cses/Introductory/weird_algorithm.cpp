#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); 
    long long n;
    cin >> n;
    cout << n << " ";
    while (n != 1){
        if (n % 2){
            n = n*3 + 1;
        } else {
            n /= 2;
        }
        cout << n << " ";
    }
}