#include <iostream>
using namespace std;

int main(){
    int s, e, b, k, n = 1, out = 0;
    cin >> s >> e >> b >> k;
    for(int i = s; i <= e; i++){
        if (i % b == 0 || i%10 == b || (i%100)/10 == b || i/100 == b){ //i%b == 0 || i%10 == b || (i % 100)%b == 0 || i / 100 = b
            if (n == k) {
                cout << i;
                out = 1;
                break;
            }
            else {
                n += 1;
            }
        }
    }
    if (!out) cout << -1;
}
