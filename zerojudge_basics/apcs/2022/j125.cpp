#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n, map[305][305], mx = INT_MIN;
    int dx[2] = {1, 0}, dy[2] = {0, 1};
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> map[i][j];
            mx = max(mx, map[i][j]);
        }
    }
    
}