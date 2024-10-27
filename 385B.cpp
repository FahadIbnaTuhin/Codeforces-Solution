#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    string s; cin >> s;
    // string s = "bearbtear";
    // string s = "bearaabearc";
    // string s = "cabearadbearcabear";
    int n = s.size();
    string t = "bear";
    int j = 0, k = 0;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == t[j]) {
            int l = i;
            while (j < 4 && l < n && s[l] == t[j]) {
                l++, j++;
            }

            if (j == 4) {
                ll tem = 0;
                if (i - k == 0 || n - l == 0) {
                    tem = i - k + n - l + 1;
                } else {
                    tem = (i - k + 1) * (n - l + 1);
                }
                ans += tem;
                k = i + 1;
            }
            j = 0;
            i = l - 1;
        }
    }

    cout << ans << '\n';

    return 0;
}

// Certainly! Let's break down the logic of the C++ code provided for solving the "Bear and Strings" problem, step by step.

// ### Problem Overview

// The task is to count the number of pairs of indices \((i, j)\) such that the substring \(x(i, j)\) contains at least one occurrence of the substring "bear". The substring "bear" must start at index \(k\) where \(i \leq k \leq j - 3\).

// ### Code Breakdown

// 1. **Includes and Namespace:**
//    ```cpp
//    #include <bits/stdc++.h>
//    using namespace std;
//    ```
//    - This includes all standard libraries and uses the `std` namespace for convenience.

// 2. **Type Definitions:**
//    ```cpp
//    typedef long long ll;
//    ```
//    - This creates a type alias `ll` for `long long`, which is used for large integers to avoid overflow.

// 3. **Main Function:**
//    ```cpp
//    int main() {
//    ```
//    - Entry point of the program.

// 4. **Input Handling:**
//    ```cpp
//    string s; cin >> s;
//    int n = s.size();
//    string t = "bear";
//    ```
//    - The string `s` is read from input, and its length `n` is calculated. A string `t` is initialized with "bear".

// 5. **Variables Initialization:**
//    ```cpp
//    int j = 0, k = 0;
//    ll ans = 0;
//    ```
//    - `j` is used to track the position in the string "bear" that we are currently matching.
//    - `k` keeps track of the last index where we found the character 'b' or where we are starting our next search.
//    - `ans` will hold the final count of valid pairs.

// 6. **Main Logic:**
//    ```cpp
//    for (int i = 0; i < n; i++) {
//        if (s[i] == t[j]) {
//            int l = i;
//            while (j < 4 && l < n && s[l] == s[j]) {
//                l++, j++;
//            }
//    ```
//    - The outer loop iterates through each character of the string \(s\).
//    - If the current character \(s[i]\) matches the current character in "bear" (`t[j]`), we start matching "bear".
//    - The inner loop continues to match characters of "bear" against the substring of \(s\) starting at \(i\).

// 7. **Checking Complete Match:**
//    ```cpp
//    if (j == 4) {
//    ```
//    - If we have matched all characters of "bear" (i.e., `j` reaches 4), we calculate the number of valid pairs.

// 8. **Calculating Valid Pairs:**
//    ```cpp
//    ll tem = 0;
//    if (i - k == 0 || n - l == 0) {
//        tem = i - k + n - l + 1;
//    } else {
//        tem = (i - k + 1) * (n - l + 1);
//    }
//    ans += tem;
//    ```
//    - Here, the variable `tem` is used to store the number of valid pairs contributed by the current occurrence of "bear".
//    - The conditions handle edge cases:
//      - If `i - k == 0`, it means there’s no character before "bear", so it only counts suffixes.
//      - If `n - l == 0`, it means "bear" is at the end, so it only counts prefixes.
//      - Otherwise, it counts all possible pairs where `i` starts from \(k\) and `j` ends after \(l\).

// 9. **Update Variables:**
//    ```cpp
//    k = i + 1;
//    ```
//    - After processing a valid "bear", update \(k\) to the next position after the first 'b' of the found "bear" to search for the next "bear".

// 10. **Reset `j` and Update `i`:**
//     ```cpp
//     j = 0;
//     i = l - 1;
//     ```
//     - Reset \(j\) to start looking for another "bear".
//     - Set \(i\) to \(l - 1\) because the outer loop will increment it, thus continuing the search from where we left off.

// 11. **Output the Result:**
//     ```cpp
//     cout << ans << '\n';
//     return 0;
//     ```
//     - Finally, print the total count of valid pairs stored in `ans`.

// ### Example Explanation

// For the input string `"bearaabearc"`:
// - The algorithm finds "bear" starting at indices \(0\) and \(6\).
// - For the first "bear", it counts valid pairs considering all prefixes that can start at \(1\) and suffixes that can extend to the end of the string.
// - For the second "bear", it again counts valid pairs with updated \(k\) and \(l\).
  
// ### Complexity

// The code runs in \(O(n)\) time due to the single pass through the string and uses constant space (aside from the input string), making it efficient for the given constraints.

// ### Summary

// This code effectively counts pairs of indices \((i, j)\) that encapsulate at least one occurrence of the substring "bear" through a direct matching approach while efficiently calculating the number of valid pairs based on the occurrences of "bear".