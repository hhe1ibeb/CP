#include <iostream>
using namespace std;

int t[1000005]{};

int main(){
    int n, m = -1, ans = -1;
    cin >> n;
    for(int i = 0; i < n; i++){
        int s, f;
        cin >> s >> f;
        t[s] += 1;
        f += 1;
        t[f] -= 1;
        m = max(f, m);
    }
    for(int i = 1; i < n; i++){
        t[i] += t[i-1];
        ans = max(ans, t[i]);
    }
    cout << ans << "\n";
}