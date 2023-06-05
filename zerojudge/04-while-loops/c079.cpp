#include <iostream>
using namespace std;

int main(){
    int n, k, count, cb;
    while (cin >> n >> k)
    {
        count = n;
        cb = k;
        while (n > k){
            count += n / k;
            cb = n % k;
            n = cb+n/k;
        }
        cout << count << "\n";
    }
}