#include <iostream>
using namespace std;

int f(long long n){
    if(n < 10) return n;
    else{
        int sum = 0;
        while(n > 0){
            sum += n % 10;
            n /= 10;
        }
        return f(sum);
    }
}

int main(){
    long long n;
    while(cin >> n && n != 0){
        cout << f(n) << "\n";
    }
}