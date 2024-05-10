#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);  
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        map<int, vector<int>> m;
        for(int i = 1; i <= n; i++) {
            int a; cin >> a;
            m[a].push_back(i);
        }

        for(auto u : m) {
            if (u.second.size() == 1) {
                cout << u.second[0] << '\n';
                break;
            }
        }
    }

    return 0;
}

// In Kotlin:
// import java.util.Scanner

// fun main() {
//     val scanner = Scanner(System.`in`)
//     val t = scanner.nextInt()

//     repeat(t) {
//         val n = scanner.nextInt()
//         val m = mutableMapOf<Int, MutableList<Int>>()

//         for (i in 1..n) {
//             val a = scanner.nextInt()
//             if (m.containsKey(a)) {
//                 m[a]!!.add(i)
//             } else {
//                 m[a] = mutableListOf(i)
//             }
//         }

//         for ((key, value) in m) {
//             if (value.size == 1) {
//                 println(value[0])
//                 break
//             }
//         }
//     }
// }
