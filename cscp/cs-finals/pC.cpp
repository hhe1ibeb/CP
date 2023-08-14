#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> time(200005, 0);
    for(int i = 0; i < n; i++){
        int l, r;
        cin >> l >> r;
        time[l]++;
        time[r+1]--;
    }
    for(int i = 1; i <= 200004; i++){
        time[i] += time[i-1];
    }
    for(int i = 1; i <= 200004; i++){
        if(time[i] >= k){
            time[i] = 1;
        }else{
            time[i] = 0;
        }
    }
    for(int i = 1; i <= 200004; i++){
        time[i] += time[i-1];
    }
    for(int i = 0; i < q; i++){
        int l, r;
        cin >> l >> r;
        cout << time[r] - time[l-1] << "\n";
    }
}