#include <iostream>
#define MAX_N 50010
using namespace std;

long long p[MAX_N];

long long cut(int left, int right){
    if(left - right <= 1) return 0;
    long long k = (p[left]+p[right])/2;
    int m = 0;
    while(p[m] <= k) m++;
    if(p[m]-p[left] >= p[right]-p[m-1]) m--;
    return cut(p[left], m) + cut(m, p[right]) + p[right] - p[left];
}

int main(){
    int n, k;
    cin >> n >> k;
    p[0] = 0; p[n+1] = 1;
    for(int i = 1; i <= n; i++) cin >> p[i];
    for(int i = 0; i <= n+1; i++) cout << p[i] << " ";
    cout << cut(0, n - 1) << "\n";
}