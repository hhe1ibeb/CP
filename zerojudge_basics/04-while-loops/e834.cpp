#include <iostream>
using namespace std;

int main(){
    int m, t;
    cin >> m;
    cin >> t;
    while (t != 0){
        cout << (t/m)*(t%m==0) + (m-t%m)*(t%m!=0) << "\n";
        cin >> t;
    }
}