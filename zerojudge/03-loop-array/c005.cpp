# include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    while (n--){
        int f;
        long long s = 0;
        cin >> f;
        while (f--){
            long long a, b, c;
            cin >> a >> b >> c;
            s += a*c; //s += (a/b)*c*b;
        }
        cout << s << "\n";
    }
}