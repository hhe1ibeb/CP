#include <iostream>
#include <algorithm>
using namespace std;

int G(int a){
    int g = 0;
    for(int i = 1; i < a; i++){
        for(int j = i+1; j <= a; j++){
            g += gcd(i, j);
        }
    }
    return g;
}

int main(){
    int n;
    cin >> n;
    while(n){
        cout << G(n) << "\n";
        cin >> n;
    }
}