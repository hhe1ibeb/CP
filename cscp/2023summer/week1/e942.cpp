#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<long long> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    sort(v.begin(), v.end());
    do{
        for(int i=0;i<n;i++) cout << v[i] << " ";
        cout << "\n";
    } while(next_permutation(v.begin(), v.end()));
}