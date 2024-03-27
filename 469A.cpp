#include <iostream>
#include <set>
using namespace std;

int main() {
    int n; cin >> n;
    set<int> arr;

    int p, x; cin >> p;
    for(int i = 0; i < p; i++) {
        cin >> x;
        arr.insert(x);
    }

    int q; cin >> q;
    for(int i = 0; i < q; i++) {
        cin >> x;
        arr.insert(x);
    }

    if (arr.size() == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}

// #include <iostream>
// #include <vector>
// #include <algorithm> // for find and sort
// using namespace std;

// int main() {
//     int n; cin >> n;
//     vector<int> arr;

//     int p[n]; cin >> p[0];
//     for(int i = 1; i <= p[0]; i++) {
//         cin >> p[i];
//         if (find(arr.begin(), arr.end(), p[i]) == arr.end()) { // Explaination at the end
//             arr.push_back(p[i]);
//         }
//     }   

//     int q[n]; cin >> q[0];
//     for(int i = 1; i <= q[0]; i++) {
//         cin >> q[i];
//         if (find(arr.begin(), arr.end(), q[i]) == arr.end()) {
//             arr.push_back(q[i]);
//         }
//     } 

//     if (arr.size() == n) {
//         cout << "I become the guy." << endl;
//     } else {
//         cout << "Oh, my keyboard!" << endl;
//     }

//     return 0;
// }

//  find(arr.begin(), arr.end(), q) == arr.end() essentially checks if the value q 
// is not found in the vector arr. If find does not locate q, it returns arr.end(), 
// indicating that the value was not found. Therefore, if find returns arr.end(), it 
// means that q is not present in the vector arr, and the condition find(arr.begin(),
//  arr.end(), q) == arr.end() evaluates to true.