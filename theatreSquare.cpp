#include <iostream>

bool is_frac(float x) {
	// std::cout << x << " " << static_cast<int>(x) << std::endl;
	return (x - static_cast<int>(x)) != 0; // True if it fractional number, otherwise False
};

int main() {
	int n, m, a; std::cin >> n >> m >> a;

	float result = static_cast<float>(n * m) / (a * a);

	std::cout << result << std::endl;

	if (is_frac(result)) {
		
	} else {
		
	}


	return 0;
}