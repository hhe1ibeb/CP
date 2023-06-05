#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, a[105], m = 0, b = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a+n, greater<int>());
        for(int i = 0; i < n; i++){
            if(a[i] % 2 == 0) m += a[i];
            else b += a[i];
        }
        if(m > b) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
}