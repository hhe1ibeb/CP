#include <iostream>
#include <vector>
using namespace std;

const int MAX_N = 200005;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        // vector<int> a(MAX_N, 0);
        vector<int> count(MAX_N, 0);
        for(int i = 0; i < n; i++){
            int a, b;
            cin >> a;
            b = a;
            for(int j = 0; j < 4; j++){
                if(a <= n){
                    count[a]++;
                } else break;
                a += b;
            }
        }
        int mf = 0, ind;
        for(int i = 0; i < count.size(); i++){
            if(count[i] > mf){
                ind = i;
                mf = count[i];
            }
        }
        cout << ind << " " << mf << "\n";
    }
}