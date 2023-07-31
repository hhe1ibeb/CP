#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
    string s;
    cin >> s;
    long long mul = 1, ans = 0;
    int las = 10;
    stack <pair <int, long long>> st; // 次數、第一個數字
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'T'){
            int now = stoi(s.substr(i+1, 2));
            ans += abs(las-now) * mul;
            vector <pair<int, int>> tmp;
            while(!st.empty() && st.top().first == -1){
                tmp.push_back({now, st.top().second});
                mul *= st.top().second;
                st.pop();
            } 
            reverse(tmp.begin(), tmp.end());
            for(auto j: tmp) st.push(j);
            las = now;
            i += 2;
        } else if(s[i] == 'L'){
            st.push({-1, (int)(s[i+1] - '0')});
            i += 1;
        } else if(s[i] == 'E'){
            
        }
    }
}