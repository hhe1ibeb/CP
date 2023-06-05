#include <iostream>
#include <algorithm>
#include <assert.h>
#define MAX_N 50005
using namespace std;
long long p[MAX_N];

long long cut(int left, int right){
    if(right-left <= 1) return 0;
    long long k = (p[right]+p[left])/2;

    int m = lower_bound(p+left, p+right, k) - p;
    if(p[m-1]-p[left] >= p[right]-p[m]) m--;
    return p[right] - p[left] + cut(left, m) + cut(m, right);
}

int main(){
    long long n, l;
    cin >> n >> l;
    p[0] = 0; p[n+1] = l;
    for(int i = 1; i <= n; i++) cin >> p[i];
    for(int i = 0; i <= n; i++) assert(p[i]<p[i+1]);
    cout << cut(0, n+1);
}