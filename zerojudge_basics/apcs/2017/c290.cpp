#include <iostream>
using namespace std;

int main(){
    string x;
    cin >> x;
    int n = x.length(), a = 0, b = 0;
    for(int i = 0; i < n; i++){
        if(i%2) a += x[i] - '0';
        else b += x[i] - '0';
    }
    cout << abs(a-b) << "\n";
}