#include <iostream>
#include <vector>
#define int long long
using namespace std;

int p[25];
vector<int> sums;

void combinations(int now, int pre, int n, int m, int arr[]){
    if(now == m){
        int sum = 0;
        for(int i = 0; i < m; i++){
            sum += arr[i];
        }
        sums.emplace_back(sum);
    } else{
        for(int i = pre + 1; i <= n; i++){
            arr[now] = i;
            combinations(now + 1, i, n, m, arr);
        }
    }
}

int32_t main(){
    int n, s = 0, minc = 1000000009;
    cin >> n;
    if(n == 1){
        int x;
        cin >> x;
        cout << x;
        return 0;
    }
    for(int i = 0; i < n; i++){
        cin >> p[i];
        s += p[i];
    }
    for(int i = 1; i < n; i++){
        combinations(0, 0, n, i, p);
    }
    int l = sums.size();
    for(int i = 0; i < l; i++){
        minc = min(abs((s - sums[i]) - sums[i]), minc);
    }
    cout << minc;
}