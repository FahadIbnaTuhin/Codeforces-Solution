#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int total; cin >> total;

    int arr[7];
    for(int i = 0; i < 7; i++) cin >> arr[i];
    
    int sum = 0, i = 0;
    while(sum < total) {
        sum += arr[i];
        i++;
        if (i == 7) i = 0;
    }

    cout << (i == 0 ? 7 : i) << '\n';

    return 0;
}