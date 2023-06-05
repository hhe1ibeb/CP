#include <iostream>
using namespace std;

int main(){
    int r, c, a[100][100];
    while (cin >> r >> c){
        for (int i = 0; i < r; i++){
            for (int j = 0; j < c; j++){
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < c; i++){
            for (int j = 0; j < r; j++){
                cout << a[j][i];
                if (j == r-1){
                    cout << "\n";
                }
                else {
                    cout << " ";
                }
            }
        }
    }
}