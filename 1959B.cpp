#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        string a, b; cin >> a >> b;
        char last_a = a.back(), last_b = b.back();
        int x_a = a.size() - 1, x_b = b.size() -1;

        if (a == b) cout << '=' << '\n';
        else if (last_a == 'S' && (last_b == 'M' || last_b == 'L')) {
            cout << '<' << '\n';
        } else if ((last_a == 'M' || last_a == 'L') && last_b == 'S') {
            cout << '>' << '\n';
        } else if (last_a == 'L' && (last_b == 'S' || last_b == 'M')) {
            cout << '>' << '\n';
        } else if ((last_a == 'S' || last_a == 'M') && last_b == 'L') {
            cout << '<' << '\n';
        } else if (last_a == 'S' && x_a > x_b)  {
            cout << '<' << '\n';
        } else if (last_a == 'S' && x_a < x_b)  {
            cout << '>' << '\n';
        } else if (last_a == 'L' && x_a > x_b) {
            cout << '>' << '\n';
        } else if (last_a == 'L' && x_a < x_b) { 
            cout << '<' << '\n';
        }
    }

    return 0;
}

// In kotlin: 
// fun main() {
//     val t = readLine()!!.toInt()
 
//     repeat(t) {
//         val (a, b) = readLine()!!.split(" ")
 
//         val last_a = a.last()
//         val last_b = b.last()
//         val x_a = a.length - 1
//         val x_b = b.length - 1
 
//         when {
//             a == b -> println('=')
//             last_a == 'S' && (last_b == 'M' || last_b == 'L') -> println('<')
//             (last_a == 'M' || last_a == 'L') && last_b == 'S' -> println('>')
//             last_a == 'L' && (last_b == 'S' || last_b == 'M') -> println('>')
//             (last_a == 'S' || last_a == 'M') && last_b == 'L' -> println('<')
//             last_a == 'S' && x_a > x_b -> println('<')
//             last_a == 'S' && x_a < x_b -> println('>')
//             last_a == 'L' && x_a > x_b -> println('>')
//             last_a == 'L' && x_a < x_b -> println('<')
//         }
//     }
// }