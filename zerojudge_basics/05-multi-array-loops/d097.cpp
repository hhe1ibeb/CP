#include <iostream>
using namespace std;

int main(){
    int n;
    while (cin >> n){
        int num[n];
        int time[3000]{};
        int d;
        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
            if (i > 0){
                d = abs(x-num[i-1]);
            }
            num[i] = x;
            time[d] += 1;
        }
        int isJolly = 1;
        for (int i = 1; i < n; i++){
            if (time[i] == 0){
                isJolly = 0;
                break;
            }
        }
        if (isJolly) cout << "Jolly" << "\n";
        else cout << "Not jolly" << "\n";
    }
}