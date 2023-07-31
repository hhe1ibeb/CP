#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n != 0){
        queue<char> s, w, ans;
        for(int i = 0; i < n; i++){
            char c;
            cin >> c;
            s.push(c);
        }
        while(!s.empty()){
            if(!w.empty() && s.front() == w.front()){
                
            }
        }
    }
}