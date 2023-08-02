#include <iostream>
using namespace std;

int a[15], ans[15];

void combination(int now, int pre, int n, int m, int arr[]){
    if(now == m){
        for(int i = 0; i < m; i++) cout << ans[i] << " ";
        cout << "\n";
        return;
    }
    for(int i = pre; i <= n - (m - now); i++){
        ans[now] = arr[i];
        combination(now + 1, i + 1, n, m, arr);
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> a[i];
    combination(0, 0, n, m, a);
}