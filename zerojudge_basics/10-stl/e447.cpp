#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n;
    queue <int> q;
    cin >> n;
    while(n--){
        int k;
        cin >> k;
        if(k == 1){
            int x;
            cin >> x;
            q.push(x);
        } else if(k == 2){
            if(q.empty()) cout << -1 << "\n";
            else cout << q.front() << "\n";
        } else{
            if(!q.empty()){
                q.pop();
            }
        }
    }
}