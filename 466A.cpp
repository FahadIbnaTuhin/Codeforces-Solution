#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    
    // Case 1: Buy only single-ride tickets
    int costSingle = n * a;
    
    // Case 2: Buy as many multi-ride tickets as possible, then fill the remaining with single-ride tickets
    int costCombo = (n / m) * b + (n % m) * a;
    
    // Case 3: Buy only multi-ride tickets even if we don't use all rides
    int costMulti = ((n + m - 1) / m) * b; // This rounds up to the next full multi-ride pack

    // The final result is the minimum of all three approaches
    int result = min({costSingle, costCombo, costMulti});
    
    cout << result << '\n';
    
    return 0;
}
// ceil : ceil(n, m) and ((n + m - 1) / m) same[use 2nd as you don't need to use function]