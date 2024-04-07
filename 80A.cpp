#include <iostream>
#include <math.h>

using namespace std;

bool is_prime(int n) {
    bool prime = true;
    for(int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            prime = false;
            break;
        }
    }
    return prime;
}

int main() {
    int n, m; cin >> n >> m;

    bool is_next = false;
    for(int i = n + 1; i <= 50; i++) {
        if (is_prime(i)) {
            // cout << i << endl;    
            if (i == m) {
                is_next = true;
            } else {
                is_next = false;
            }
            break;
        }
    }
    cout << (is_next ? "YES" : "NO") << endl;

    return 0;
}