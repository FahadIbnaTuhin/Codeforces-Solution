#include<iostream>
using namespace std;

int main() {
  int n, l, r, x; cin >> n >> l >> r >> x;
  int c[n];
  for (int i = 0; i < n; i++) {
    cin >> c[i];
  }
  int ans = 0;
  for (int mask = 0; mask < (1 << n); mask++) {
    // fix the subset as the elements under this bitmask
    int total_problems = 0, total_difficulty = 0;
    int min_difficulty = 1e6 + 9, max_difficulty = 0;
    for (int i = 0; i < n; i++) {
      if ((mask & (1ULL << i))) {
        total_problems++;
        total_difficulty += c[i];
        min_difficulty = min(min_difficulty, c[i]);
        max_difficulty = max(max_difficulty, c[i]);
      }
    }
    if (total_problems >= 2 && l <= total_difficulty && total_difficulty <= r
                    && max_difficulty - min_difficulty >= x) {
        ans++;
    }
  }
  cout << ans << '\n';
  return 0;
}
// Time: O(2^n * n)
// Space: O(n)
// https://codeforces.com/problemset/problem/550/B

// Should i use 1 or 1ULL?
// For this problem, since n≤15, the maximum number of problems is small, so even
// when you shift the bit 15 places (i.e., 1 << 15), a 32-bit integer is sufficient.
// You can safely use 1. If you want to future-proof your code for larger inputs, or
// make sure it handles larger shifts, you can use 1ULL, but it's not necessary here.

// Bitmasking is specifically for generating subsequences, not subarrays, because it allows you to selectively include or exclude any element from the array while preserving the order.
