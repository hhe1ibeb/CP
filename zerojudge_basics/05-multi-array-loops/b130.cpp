#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int count = 0, num[n];
    for (int i = 0; i < n; i++){
        if (i > 0){
            if (arr[i] != arr[i-1]){
                num[count] = arr[i];
                count += 1;
            }
        } else {
           num[0] = arr[0];
           count += 1;
        }
    }
    cout << count << "\n";
    for (int i = 0; i < count; i++){
        cout << num[i] << " ";
    }
}