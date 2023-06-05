#include <iostream>
#include <algorithm>
using namespace std;

struct line{
    int a, b;
};

bool cmp(line x, line y){
    if(x.a == y.a) return x.b > y.b;
    return x.a < y.a;
}

line ls[10000];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, cnt=0, s, e;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> ls[i].a >> ls[i].b;
    }
    sort(ls, ls+n, cmp);
    for(int i = 0; i < n; i++){
        s = ls[i].a;
        e = ls[i].b;
        while(i < n-1 && ls[i+1].a < e){
            if(ls[i+1].b > e) e = ls[i+1].b;
            i++;
        }
        cnt += e-s;
    }
    cout << cnt;
}