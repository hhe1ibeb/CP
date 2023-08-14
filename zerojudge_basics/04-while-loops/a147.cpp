#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    while (n!=0){
        for (int i = 1; i < n; i++){
            if (i % 7 != 0){
                cout << i << " ";
            }
        }
        cout << "\n";
        cin >> n;
    }
}