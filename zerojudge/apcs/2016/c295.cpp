#include <iostream>
using namespace std;

int main(){
    int n, m, chosen[20] = {}, s = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        int x, y = -1;
        for(int j = 0; j < m; j++){
            cin >> x;
            if(x > y) y = x;
        }
        s += y;
        chosen[i] = y;
    }
    cout << s << "\n";
    bool db = false;
    for(int i = 0; i < n; i++){
        if(s % chosen[i] == 0){
            if(db) cout << " ";
            db = true;
            cout << chosen[i];
        }
    }
    if(!db) cout << -1;
}