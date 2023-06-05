#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, a = -1, b = -1, score[20];
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        score[i] = x;
        if(x >= 60){
            if(b == -1) b = x;
            else if(x < b) b = x;
        } else if(x < 60 && x > a){
            a = x;
        }
    }
    sort(score, score+n);
    for(int i = 0; i < n; i++){
        cout << score[i] << " ";
    }
    cout << "\n";
    if(a >= 0) cout << a << "\n";
    else cout << "best case" << "\n";
    if(b >= 0) cout << b << "\n";
    else cout << "worst case" << "\n";
}