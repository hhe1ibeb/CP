#include <iostream>
using namespace std;

int n, m, a[15], ans[15];

void combination(int now, int pre, int n, int m){
    if(now == m){
        for(int i = 0; i < m; i++) cout << char(ans[i]+96);
        cout << "\n";
        return;
    }
    for(int i = pre; i <= n - (m - now); i++){
        ans[now] = a[i];
        combination(now + 1, i + 1, n, m);
    }
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < 15; i++) a[i] = i+1;
    while(n != 0 && m != 0){
        combination(0, 0, n, m);
        cin >> n >> m;
    }
}