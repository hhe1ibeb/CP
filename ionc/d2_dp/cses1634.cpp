#include <iostream>
#include <cstring>
using namespace std;

typedef long long ll;
 
ll n, x, c[105], dp[1000005];
 
int main(){
    cin >> n >> x;
    memset(dp, 0x3F, sizeof(dp));
    dp[0] = 0;
    for(ll i = 0; i < n; i++){
        cin >> c[i];
        for(ll j = 0; j + c[i] <= x; j++){
            dp[j+c[i]] = min(dp[j+c[i]], dp[j]+1);
        }
    }
    if(dp[x] > x) cout << -1;
    else cout << dp[x];
}