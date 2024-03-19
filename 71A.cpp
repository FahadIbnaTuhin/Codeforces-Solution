#include <iostream>
#include <string>

int main()
{
	int n;
	std::cin >> n;

	for (size_t i{}; i < n; ++i) {
		std::string w; std::cin >> w;
		int s = std::size(w);

		if (s > 10) {
			std::cout << w[0] << (s-2) << w[s - 1] << std::endl;
		} else {
			std::cout << w << std::endl;
		}
	}
	return 0;
}