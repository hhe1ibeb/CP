#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int n, tar;
bool found = false;
vector<int> v(10);

int C[10][10];

bool check(vector<int> arr){
    int s = 0;
    for(int i = 0; i < n; i++) s += arr[i] * C[n-1][i];
    if(s == tar) return true;
    return false;
}

int main(){
    scanf("%d %d", &n, &tar);
    for(int i = 0; i < n; i++) v[i] = i+1;
    v.resize(n);

    for(int i = 0; i < n; i++){
        C[i][0] = 1;
        C[i][n-1] = 1;
    }
    for(int i = 1; i < n; i++){
        for(int j = 1; j < n-1; j++){
            C[i][j] = C[i-1][j-1] + C[i-1][j];
        }
    }

    if(!check(v)){
        while(next_permutation(v.begin(), v.end())){
            if(check(v)){
                for(int i = 0; i < n; i++) printf("%d ", v[i]);
                printf("\n");
                break;
            }
        }
    }
    else{
        for(int i = 0; i < n; i++) printf("%d ", v[i]);
        printf("\n");
    }
}