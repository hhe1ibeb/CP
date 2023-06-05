#include <iostream>
#include <algorithm>
using namespace std;

struct site{
    string url;
    int score;
};

bool operator<(site a, site b){
    return a.score < b.score;
}

int main(){
    int t;
    cin >> t;
    site a[10];
    int n = t;
    while (n--){
        for(int i = 0; i < 10; i++){
            cin >> a[i].url >> a[i].score;
        }
        int max = 0;
        for(int i = 0; i < 10; i++){
            if(a[i].score > max) max = a[i].score;
        }
        cout << "Case #" << t-n << ":" << "\n";
        for(int i = 0; i < 10; i++){
            if(a[i].score == max) cout << a[i].url << "\n";
        }
    }
}