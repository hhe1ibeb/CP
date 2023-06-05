#include <iostream>
using namespace std;

int main() {
    int h, m;
    cin >> h >> m;
    if (h < 7 || h == 7 && m < 30 || h >= 17) cout << "Off School";
    else cout << "At School";
}