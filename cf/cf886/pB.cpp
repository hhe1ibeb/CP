#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, bq = 0, ind;
        cin >> n;
        for(int i = 0; i < n; i++){
            int a, b;
            cin >> a >> b;
            if(a <= 10 && b > bq){
                bq = b;
                ind = i+1;
            }
        }
        cout << ind << "\n";
    }
}