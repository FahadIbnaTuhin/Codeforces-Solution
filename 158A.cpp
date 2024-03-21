#include <iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	int inp[n];
	for(int i = 0; i < n; ++i) {
		cin >> inp[i];
	}

    int count = 0;
    for(int i = 0; i < n; ++i) {
        if (inp[i] != 0 && inp[i] >= inp[k - 1]) {
            count += 1;
        } else {
            break;
        }
    }

    cout << count << endl;

	return 0;
}