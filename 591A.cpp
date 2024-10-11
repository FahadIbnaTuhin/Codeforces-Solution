#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int l, p, q; cin >> l >> p >> q;

    float t = (float)l / (p + q);

    cout << 1.0 * p * t << '\n';

    return 0;
}

// To calculate the distance each object (A and B) has traveled from their initial positions when they meet, we can use the concept of relative velocity.

// Here are the steps:

// ### Step 1: Calculate the relative speed
// Since A and B are moving towards each other, their relative speed is the sum of their individual speeds:
// \[
// \text{Relative speed} = 60 \, \text{m/s} + 40 \, \text{m/s} = 100 \, \text{m/s}
// \]

// ### Step 2: Calculate the time until they meet
// The time \( t \) taken for A and B to meet can be calculated using the formula:
// \[
// t = \frac{\text{Distance between A and B}}{\text{Relative speed}} = \frac{l}{100}
// \]

// ### Step 3: Calculate the distance each has traveled
// - Distance traveled by A in time \( t \) is:
// \[
// \text{Distance traveled by A} = \text{Speed of A} \times t = 60 \times \frac{l}{100} = \frac{3l}{5}
// \]
// - Distance traveled by B in time \( t \) is:
// \[
// \text{Distance traveled by B} = \text{Speed of B} \times t = 40 \times \frac{l}{100} = \frac{2l}{5}
// \]

// Thus, when A and B meet, A will have traveled \( \frac{3l}{5} \) from its initial position, and B will have traveled \( \frac{2l}{5} \) from its initial position.

