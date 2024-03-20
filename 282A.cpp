#include <iostream>
#include <string>
 
int main() {
    int n;
    std::cin >> n;
 
    if (1 <= n && n <= 150) {
        int count = 0;
        for (int i = 0; i < n; ++i) {
            std::string w;
            std::cin >> w;
 
            if ((w[0] == '+') || (w[(std::size(w) - 1)]) == '+') {
                // std::cout << "YES" << std::endl;
                count += 1;
            } else {
                // std::cout << "NO" << std::endl;
                count -= 1;
            }
        }
        std::cout << count << std::endl;
    }
    return 0;
}