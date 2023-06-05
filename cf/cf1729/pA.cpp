#include <iostream>
using namespace std;

int main(){
    int t, a, b, c, t1, t2;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        t1 = a - 1;
        t2 = abs(b-c) + (c-1);
        if(t1 < t2) cout << 1;
        else if(t1 > t2) cout << 2;
        else cout << 3;
        cout << "\n";
    }
}