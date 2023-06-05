#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, q, a[20005]{}, s = 0;
        cin >> n >> q;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            s += a[i];
        }
        while(q--){
            int l, r, k, sum = s;
            cin >> l >> r >> k;
            for(int i = l; i <= r; i++){
                sum += k - a[i];
            }
            if(sum % 2 == 0) cout << "NO" << "\n";
            else cout << "YES" << "\n";
        }
    }
}