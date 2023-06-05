#include <iostream>
using namespace std;

int main(){
    int m = 1, rn = 1;
    string dna;
    cin >> dna;
    int n = dna.length();
    for (int i = 1; i < n; i++){
        if (dna[i] == dna[i-1]){
            rn += 1;
        }
        if (rn > m) m = rn;
        if (dna[i] != dna[i-1]) {
            rn = 1;
        }
    }
    cout << m;
}