#include <iostream>
using namespace std;

int main(){
    int n;
    while (cin >> n){
        double s = 0, t = n;
        double k;
        while (t--){
            cin >> k;
            s += k;
        }
        if (s/n > 59) cout << "no" << "\n";
        else cout << "yes" << "\n";
    }
}