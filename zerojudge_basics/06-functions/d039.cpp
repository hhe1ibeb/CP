#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n, m;
        cin >> n >> m;
        n = n/3;
        m = m/3;
        cout << n*m << endl;
    }
}