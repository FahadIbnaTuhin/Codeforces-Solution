#include <bits/stdc++.h>

using namespace std;

int main() {        
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    set<int> arr;

    for(int i = 0; i < n; i++) {
        int inp; cin >> inp;
        arr.insert(inp);
    }

    if (arr.size() == 1) cout << "NO\n";
    else {
        // cout << *(++arr.begin()) << '\n';

        int p, c = 0; // to print the 3rd unique value
        for(auto u : arr) {
            if (c == 3) break;
            p = u;
            c++;
        }
        cout << p << '\n';
    }

    return 0;
}


// #include <bits/stdc++.h>

// using namespace std;

// int main() {        
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     int n; cin >> n;
//     int arr[n];

//     for(int i = 0; i < n; i++) cin >> arr[i];

//     sort(arr, arr + n);
//     int sz = unique(arr, arr + n) - arr;

//     cout << (sz > 1 ? to_string(arr[1]) : "NO") << '\n';

//     return 0;
// }