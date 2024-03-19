#include <iostream>
#include <string>

int main() {
    std::string w;
    std::cin >> w;

    if (w[0] == '+') {
    	std::cout << "Pre" << std::endl;
    } else {
    	std::cout << "Post" << std::endl;
    }

    return 0;
}

