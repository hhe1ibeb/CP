#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a, b, c, s[3];
    for(int i = 0; i < 3; i++) cin >> s[i];
    sort(s, s+3);
    a = s[0];
    b = s[1];
    c = s[2];
    cout << a << " " << b << " " << c << "\n";
    if(a+b <= c) cout << "No";
    else if(a*a+b*b < c*c) cout << "Obtuse";
    else if(a*a+b*b == c*c) cout << "Right";
    else cout << "Acute";
}