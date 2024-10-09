#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m; cin >> n >> m;
    
    vector<string> answers(n);
    for (string &i : answers) cin >> i;
    
    vector<int> points(m);
    for (int &i : points) cin >> i;
    
    int total_score = 0;
    
    for (int j = 0; j < m; ++j) {
        vector<int> count(5, 0);
        
        for (int i = 0; i < n; ++i) {
            char answer = answers[i][j];
            count[answer - 'A']++;  
        }
        
        int max_count = max({count[0], count[1], count[2], count[3], count[4]});
        
        total_score += max_count * points[j];
    }
    
    cout << total_score << endl;
    
    return 0;
}