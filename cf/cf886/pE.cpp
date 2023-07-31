#include <iostream>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n, c, bd = 0;
        cin >> n >> c;
        for(int i = 0; i < n; i++){
            int s;
            cin >> s;
            bd += s*4 + 4;
        }
    }
}