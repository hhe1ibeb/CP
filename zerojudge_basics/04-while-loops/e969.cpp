#include <iostream>
using namespace std;

int main(){
    int n, m, k, time = 0;
    cin >> n >> m >> k;
    int food;
    if (k == 0) food = 32;
    else food = 55;
    if (n < food) cout << "Wayne can't eat and drink.";
    else{
        while (n >= food){
            cout << time << ": ";
            if (k == 0) cout << "Wayne eats an Apple pie, and now he ";
            else cout << "Wayne drinks a Corn soup, and now he ";
            n -= food;
            if (n == 0) cout << "doesn't have money.\n";
            else if (n == 1) cout << "has 1 dollar.\n";
            else cout << "has " << n << " dollars.\n";
            k = !k;
            if (k == 0) food = 32;
            else food = 55;
            time += m;
        }
    }
}