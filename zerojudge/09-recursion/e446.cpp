#include <iostream>
#include <algorithm>
using namespace std;

int n;

void perm(int ls[], int i){
    if(i == n){
        for(int j = 1; j <= n; j++){
            cout << ls[j] << " ";
        }
        cout << "\n";
    } else{
        for(int j = i; j <= n; j++){
            swap(ls[i], ls[j]);
            perm(ls, i+1);
            swap(ls[i], ls[j]);
        }
    }
}

int main(){
    int a[15]{};
    cin >> n;
    for(int i = 1; i <= n; i++){
        a[i] = i;
    }
    perm(a, 1);
}