#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++){
        num[i] = 0;
    }
    for (int i = 0; i < n-1; i++){
        int x;
        cin >> x;
        num[x-1] = 1;
    }
    for (int i = 0; i < n; i++){
        if (num[i] != 1){
            cout << i+1;
            break;
        }
    }
}