#include <iostream>
using namespace std;

int digit_sum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int find_coolest_number(int n) {
    for (int i = max(1, n-45); i < n; i++) {
        if (digit_sum(i) + i == n) {
            return i;
        }
    }
    return 0;
}

int main() {
    int m;
    cin >> m;
    while (m--) {
        int n;
        cin >> n;
        int coolest_number = find_coolest_number(n);
        if (coolest_number == 0) {
            cout << 0 << "\n";
        } else {
            cout << coolest_number << "\n";
        }
    }
}
