#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int a[5];
        cin >> a[0] >> a[1] >> a[2] >> a[3];
        if (a[1]-a[0] == a[2]-a[1]){
            int d = a[1] - a[0];
            cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[3]+d << "\n";
        } else{
            int r = a[1] / a[0];
            cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[3]*r << "\n";
        }
    }
}