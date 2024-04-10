#include <bits/stdc++.h>

using namespace std;

int total_pages(int w, int h) {
    if (w % 2 == 0 && h % 2 == 0) {
        return w * h;
    } else if (w % 2 == 0) {
        return w / 2;
    } else if (h % 2 == 0) {
        return h / 2;
    } else {
        return 1;
    }
}

int main() {
    int w, h; cin >> w >> h;

    cout << total_pages(w, h) << endl;
    

    return 0;
}

// find . -type f -executable -delete