#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    while (n--){
        int a, f;
        cin >> a >> f;
        while(f--){
            for (int i = 1; i <= a; i++){
                for (int j = 0; j < i; j++){
                    cout << i;
                }
                cout << "\n";
            }
            for (int i = a-1; i > 0; i--){
                for (int j = 0; j < i; j++){
                    cout << i;
                }
                cout << "\n";
            }
            cout << "\n";
        }
    }
}