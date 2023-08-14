#include <iostream>
using namespace std;

int main(){
    string a, b;
    while (cin >> a >> b){
        if(b[0]>=a[0])cout<<(b[0]-a[0])<<"\n";
        else cout<<(b[0]-a[0]+26)<<"\n";
    }
}