#include <iostream>
using namespace std;

int eval(){
    int x, y;
    string token;
    cin >> token;
    if(token[0] == 'f'){
        x = eval();
        return 2*x - 1;
    } else if(token[0] == 'g'){
        x = eval();
        y = eval();
        return x + 2*y - 3;
    } else {
        return stoi(token);
    }
}

int main(){
    cout << eval();
}