#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    vector<string> v;
    do{
        v.emplace_back(s);
    } while(next_permutation(s.begin(), s.end()));
    cout << v.size() << "\n";
    for(string a:v) cout << a << "\n";
}