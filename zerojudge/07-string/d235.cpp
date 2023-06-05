#include <iostream>
using namespace std;

int main(){
    string n;
    while(1){
        cin >> n;
        if(n == "0") break;
        int a=0, b=0;
        for(int i = 0; i < n.length(); i+=2){
            a += int(n[i])-48;
        }
        for(int i = 1; i < n.length(); i+=2){
            b += int(n[i])-48;
        }
        if(abs(a-b)%11==0) cout << n << " is a multiple of 11." << "\n";
        else cout << n << " is not a multiple of 11." << "\n";
    }
}