#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	int count {};

	for (size_t i{}; i < n; ++i) {
		int a, b, c;
		std::cin >> a >> b >> c;

		if ((a + b + c) > 1) {
			count += 1;
		}
	}

	std::cout << count << std::endl;
	return 0;
}