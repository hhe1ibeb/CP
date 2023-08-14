#include <iostream>
using namespace std;

int main(){
    int n;
    while (cin >> n){
        int count = 0;
        while (1){
            count += n/5;
            n /= 5;
            if (n == 0 || n == 1) break;
        }
        cout << count << "\n";
    }
}