#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a, b, c;
    cin >> a >> b >> c;
    for(int i = n; i > 0; i--){
        if(i == a or i == b or i == c){
        continue;
        } else{
        cout << "No. " << i << endl;
        }
    }
    return 0;
}