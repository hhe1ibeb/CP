#include <iostream>
using namespace std;

int main(){
    int s, n = 1;
    cin >> s;
    while (s != -1){
        cout << "Case " << n << ":\n";
        int problems[12];
        for (int i = 0; i < 12; i++){
            cin >> problems[i];
        }
        int sum = s;
        for (int i = 0; i < 12; i++){
            int req;
            cin >> req;
            if (sum >= req){
                cout << "No problem! :D" << "\n"; 
                sum -= req;
            }
            else cout << "No problem. :(" << "\n";
            sum += problems[i];
        }
        n += 1;
        cin >> s;
    }
}