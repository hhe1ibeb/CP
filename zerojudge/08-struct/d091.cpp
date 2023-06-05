#include <iostream>
using namespace std;

struct figure{
    string type;
    double lu_x, lu_y, rd_x, rd_y;
};

int main(){
    figure rec[10];
    int n = 0;
    while(1){
        string t;
        cin >> t;
        if (t == "*") break;
        rec[n].type  = t;
        cin >> rec[n].lu_x >> rec[n].lu_y >> rec[n].rd_x >> rec[n].rd_y;
        n += 1;
    }
    double x, y;
    int p = 1;
    while(cin >> x >> y){
        if (x == 9999.9 && y == 9999.9) break;
        int iscon = 0;
        for(int i = 0; i < n; i++){
            if (x > rec[i].lu_x && x < rec[i].rd_x && y < rec[i].lu_y && y > rec[i].rd_y){
                cout << "Point " << p << " is contained in figure " << i+1 << "\n";
                iscon = 1;
            }
        }
        if (!iscon && p != 985) cout << "Point " << p << " is not contained in any figure " << "\n";
        else if (!iscon && p == 985) cout << "Point " << p << " is not contained in any figure" << "\n";
        p += 1;
    }
}