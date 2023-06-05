#include <iostream>
using namespace std;

int main(){
    int t, s, p, sec, sum = 0;
    cin >> t >> s >> p;
    sec = t/5;
    cout << sec << "\n";
    cout << t-sec*4+1 << "\n";
    sum += int(p*0.5)*(sec+1);
    sum += int(p*0.6)*sec;
    sum += int(p*0.8)*sec;
    sum += int(p*0.9)*sec;
    cout << sum << "\n";
}