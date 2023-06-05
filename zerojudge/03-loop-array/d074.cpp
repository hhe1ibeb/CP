# include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int m = 0;
    while(n--){
        int x;
        cin >> x;
        if (x > m){
            m = x;
        }
    }
    cout << m;
}