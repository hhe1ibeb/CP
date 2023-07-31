#include <iostream>
using namespace std;

typedef long long ll;

ll f[105], g[105];

int main(){
    int n;
    cin >> f[0] >> f[1] >> g[0] >> g[1] >> n;
    for(int i = 2; i <= n; i++){
        if(i%3 == 0){
            f[i] = f[i-1] + g[f[i/3] % i];
        } else{
            f[i] = f[i-1] + g[i-2];
        }
        if(i%5 == 0){
            g[i] = g[i-1] + f[g[i/5] % i];
        } else{
            g[i] = g[i-1] + f[i-2];
        }
    }
    cout << f[n] << " " << g[n] << "\n";
}