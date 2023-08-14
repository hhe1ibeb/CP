# include <iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    n = t;
    while (n--){
        int a, b, s = 0;
        cin >> a >> b;
        for (int i = a+(a%2==0); i <= b-(b%2==0); i+=2){
            s += i;
        }
        cout << "Case " << t-n << ": " << s << "\n";
    }
}