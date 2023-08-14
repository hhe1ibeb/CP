#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n <= 2500){
        cout << 1 << " " << (n+24)/25 << " " << (n+24)%25 + 1;
    } else if (n <= 7500){
        n -= 2500;
        cout << 2 << " " << (n+49)/50 << " " << (n+49)%50 + 1;
    } else {
        n -= 7500;
        cout << 3 << " " << (n+24)/25 << " " << (n+24)%25 + 1;
    }
}