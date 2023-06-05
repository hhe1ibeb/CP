#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i = 1; i < 7; i++){
        cout << abs(s[i] - s[i-1]);
    }
}