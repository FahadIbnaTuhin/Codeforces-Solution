#include <iostream>

int main() {
	int n;
	std::cin >> n;

	int inputs[n];
	for(int i = 0; i < n; ++i) {
		std::cin >> inputs[i];
	}

	for(int i : inputs) {
		std::cout << i << " ";
	}
	std::cout << std::endl;

	return 0;
}