#include <iostream>
#include <cmath>
#include <iomanip>

// bool is_frac(float x) {
// 	// std::cout << x << " " << static_cast<int>(x) << std::endl;
// 	return (x - static_cast<int>(x)) != 0; // True if it fractional number, otherwise False
// };

int main() {
	long long n, m;
	double a;
	std::cin >> n >> m >> a;

	if (1 <= n) {
		double result {std::ceil(n / a) * std::ceil(m / a)};
		std::cout << std::fixed << std::setprecision(0) << result << std::endl;
	}

	return 0;
}

// In this code, std::fixed ensures that the number is displayed in decimal form, and 
// std::setprecision(0) sets the precision to zero decimal places, 