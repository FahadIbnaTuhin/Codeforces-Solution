#include <bits/stdc++.h>

using namespace std;

int total_page(int w, int h) { // assuming atleast one parameter is even
    int t = 1;
    
    if (w % 2 == 0) {
        t += total_page(w / 2, h);
    } else if (h % 2 == 0) {
        t += total_page(w, h / 2);
    }

    return t;
}

int main() {
    int w, h; cin >> w >> h;
    int result = total_page(w, h);
    cout << result << endl;
    

    return 0;
}

// 4 1 2 1 4