#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    
    vector<int> arr(n);
    for (int &i : arr) cin >> i;
    
    vector<int> blocks;  // This will store the lengths of contiguous blocks of the same sushi type
    int count = 1;
    
    // Step 1: Create blocks of contiguous elements
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i-1]) {
            count++;
        } else {
            blocks.push_back(count);
            count = 1;
        }
    }
    blocks.push_back(count);  // push the last block
    
    // Step 2: Compare adjacent blocks
    int max_length = 0;
    for (int i = 1; i < blocks.size(); i++) {
        // The maximum length is twice the smaller block size between two adjacent blocks
        max_length = max(max_length, 2 * min(blocks[i-1], blocks[i]));
    }
    
    cout << max_length << endl;
    
    return 0;
}
// Logic Explained:
// Imagine the sushi types are:
// 2 2 1 1 1 2 2 2

// This can be broken into blocks:
// The first block has two 2s: [2, 2] → block size = 2
// The second block has three 1s: [1, 1, 1] → block size = 3
// The third block has three 2s: [2, 2, 2] → block size = 3
// Now, for a valid subsegment, we want an equal number of 1s and 2s, and they must be in two separate 
// blocks. So we look at two consecutive blocks at a time:
// First block [2, 2] and second block [1, 1, 1]
// The maximum valid subsegment here would be the smaller block size between the two, which 
// is 2 (because the first block has 2 sushi). So the length of this valid subsegment is 2 * 2 = 4.
// Second block [1, 1, 1] and third block [2, 2, 2]
// The smaller block size here is 3. So the length of this valid subsegment is 2 * 3 = 6.
