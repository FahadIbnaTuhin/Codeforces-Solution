#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        map<char, int> freq;
        int n, k; cin >> n >> k;
        
        string s; cin >> s;

        for(char c : s) ++freq[c];

        int ans = 0;
        for(char c = 'A'; c <= 'Z'; c++) {
            int c1 = freq[c], c2 = freq[tolower(c)];
            
            if (c1 && c2) {
                int minimum;
                if (c1 >= c2) {
                    minimum = c2;
                    c1 -= c2;
                    c2 = 0;
                } else {
                    minimum = c1;
                    c2 -= c1;
                    c1 = 0;
                }
                ans += minimum;
            }

            while(c1 >= 2 && k > 0) {
                ans++;
                c1 -= 2;
                --k;
            }
            
            while(c2 >= 2 && k > 0) {
                ans++;
                c2 -= 2;
                --k;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}

// In Kotlin:
// import java.util.Scanner
 
// fun main() {
//     val scanner = Scanner(System.`in`)
//     val t = scanner.nextInt()
 
//     repeat(t) {
//         val freq = mutableMapOf<Char, Int>()
//         val n = scanner.nextInt()
//         var k = scanner.nextInt()
 
//         val s = scanner.next()
 
//         for (c in s) {
//             freq[c] = freq.getOrDefault(c, 0) + 1
//         }
 
//         var ans = 0
//         for (c in 'A'..'Z') {
//             var c1 = freq.getOrDefault(c, 0)
//             var c2 = freq.getOrDefault(c.toLowerCase(), 0)
 
//             if (c1 > 0 && c2 > 0) {
//                 val minimum = minOf(c1, c2)
//                 ans += minimum
//                 c1 -= minimum
//                 c2 -= minimum
//             }
 
//             while (c1 >= 2 && k > 0) {
//                 ans++
//                 c1 -= 2
//                 k--
//             }
 
//             while (c2 >= 2 && k > 0) {
//                 ans++
//                 c2 -= 2
//                 k--
//             }
//         }
 
//         println(ans)
//     }
// }