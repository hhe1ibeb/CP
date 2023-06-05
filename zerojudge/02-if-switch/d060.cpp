#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;
    cout << (60-((m+60)-25)%60)%60;
}