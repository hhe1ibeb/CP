#include <iostream>
using namespace std;

int main(){
    int r, c, m;
    while(cin >> r >> c >> m){
        int a[10][10], b[10][10], act[10];
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                cin >> b[i][j];
            }
        }
        for(int i = 0; i < m; i++){
            cin >> act[i];
        }
        for(int k = 0; k < m; k++){
            if(act[m-k-1] == 1){
                for(int i = 0; i < r; i++){
                    for(int j = 0; j < c; j++){
                        a[i][j] = b[r-i-1][j];
                    }
                }
            }
            else{
                for(int i = 0; i < c; i++){
                    for(int j = 0; j < r; j++){
                        a[i][j] = b[j][c-i-1];
                    }
                }
                int x;
                x = r;
                r = c;
                c = x;
            }
            for(int i = 0; i < r; i++){
                for(int j = 0; j < c; j++){
                    b[i][j] = a[i][j];
                }
            }
        }
        cout << r << " " << c << "\n";
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                cout << a[i][j];
                if(j != c-1) cout << " ";
            }
            cout << "\n";
        }
    }
}