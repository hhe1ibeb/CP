# include <iostream>
# include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n], s = 0;
        for (int i = 0; i < n; i++){
            int k;
            cin >> k;
            a[i] = k;
            s += k;
        }
        int avg = s / n;
        sort(a, a+n);
        cout << avg << "\n";
        int dis = 0;
        for (int i = 0; i < n; i++){
            int x = a[i];
            
        }
        cout << dis << "\n";
    }
}