#include <iostream>
using namespace std;

char map[1005][1005];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void dfs(int x, int y){
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i], ny = y + dy[i];
        if(map[nx][ny] == '.'){
            map[nx][ny] = '#';
            dfs(nx, ny);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, ans = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> map[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(map[i][j] == '.'){
                map[i][j] = '#';
                ans++;
                dfs(i, j);
            }
        }
    }
    cout << ans << "\n";
}