#include <iostream>
using namespace std;

int main(){
    int n, t, w, total = 0;
    cin >> n >> w;
    t = n;
    while (t--){
        int m;
        cin >> m;
        int sum = 0;
        for(int i = 0; i < m; i++){
            int x;
            cin >> x;
            sum += x;
        }
        total = total + w - sum;
        if (total <= 0){
            cout << n-t;
            break;
        }
    }
    if (total > 0) cout << -1;
}