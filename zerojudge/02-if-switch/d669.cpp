#include <iostream>
using namespace std;

int main() {
    int h1, m1, h2, m2;
    cin >> h1 >> m1 >> h2 >> m2;
    while(!(h1==0 && m1==0 && h2==0 && m2==0)){
        if(h1 == h2){
            if(m1 <= m2){
                cout << m2 - m1 << "\n";
            } else{
                cout << (24-h1-1)*60 + h2*60 + (60-m1) + m2 << "\n";
            }
        } else if (h1 < h2){
            cout << (h2-h1-1)*60 + (60-m1) + m2 << "\n";
        } else{
            cout << (24-h1-1)*60 + h2*60 + (60-m1) + m2 << "\n";
        }
        cin >> h1 >> m1 >> h2 >> m2;
    }
}