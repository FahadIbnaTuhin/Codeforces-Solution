#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);      
    int n; cin >> n;

    string h; cin >> h;
    vector<string> htoa;
    multimap<string, string> atoh;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        string ha = s.substr(0, 3), ah = s.substr(5, 3);

        if (h == ha) htoa.push_back(ah);
        else atoh.insert({ha, ah});
    }   

    int state = 0; // 0 means at home, 1 means at abroad
    for (string key : htoa) {
        auto it = atoh.find(key);
        if (it == atoh.end()) {
            state = 1;
            break;
        } else {
            atoh.erase(it);
        }
    }

    cout << (state ? "contest\n" : "home\n");
    
    return 0;
}