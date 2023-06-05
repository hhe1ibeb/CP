#include <iostream>
using namespace std;

int main(){
    int n, m = 1;
    cin >> n;
    while (n != 0){
        int h[n], s = 0, t = 0;
        for (int i = 0; i < n; i++){
            int k;
            cin >> k;
            h[i] = k;
            s += k;
        }
        int tar = s/n;
        for (int i = 0; i < n; i++){
            if (h[i] > tar){
                t += h[i]-tar;
            }
        }
        cout << "Set #" << m << "\n" << "The minimum number of moves is " << t << ".\n";
        m += 1;
        cin >> n;
    }
}