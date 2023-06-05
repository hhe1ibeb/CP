#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
    long long q;
    cin >> q;
    while(q--){
        long long n, t[55], x, count = 0;
        vector<char> s;
        stack<int> d;
        cin >> n;
        cin >> x;
        for(int i = 0; i < n; i++){
            t[i] = x % 10;
            x /= 10;
        }
        for(int i = n-1; i >= 0; i--){
            d.push(t[i]);
        }
        while(!d.empty()){
            int a, b, ord;
            if(d.top() == 0){
                d.pop();
                b = d.top();
                d.pop();
                a = d.top();
                d.pop();
                ord = a*10 + b + 96;
                s.push_back(char(ord));
            } else{
                a = d.top();
                d.pop();
                ord = a + 96;
                s.push_back(char(ord));
            }
            count++;
        }
        for(int i = count; i >= 0; i--){
            cout << s[i];
        }
        cout << "\n";
    }
}