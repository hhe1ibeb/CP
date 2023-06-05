#include <iostream>
using namespace std;

int main(){
    int z, i, m, l, n = 0;
    cin >> z >> i >> m >> l;
    while (z != 0 && i != 0 && m != 0 && l != 0){
        n += 1;
        int length = 0, arr[9999] = {0};
        int x = (z*l + i) % m;
        while (1){
            if (arr[x] != 0){
                break;
            } else {
                arr[x] = 1;
                length += 1;
            }
            x = (z*x + i) % m;
        }
        cout << "Case " << n << ": " << length << "\n";
        cin >> z >> i >> m >> l;
    }
}