#include <iostream>
using namespace std;

int main(){
    int s;
    string n;
    while (cin >> s >> n){
        int l = n.length();
        for(int i = 0; i < l; i++){
            int x = n[i];
            cout << " ";
            for(int j = 0; j < s; j++){
                if(x == 1 || x == 4){
                    cout << " ";
                } else {
                    cout << "-";
                }
            }
            cout << " ";
            cout << "\n";
            for(int j = 0; j < s; j++){
                // for(int )
            }
        }
    }
}

//Wa