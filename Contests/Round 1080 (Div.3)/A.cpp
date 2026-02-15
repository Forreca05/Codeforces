#include <iostream>

int main() {
	int t, leng, a;
	std::string has = "NO";
	std::cin >> t;
	while (t--) {
		std::cin >> leng;
		while (leng--) {
			std::cin >> a;
			if (a == 67) has = "YES";
		}
		std::cout << has << std::endl;
		has = "NO";
	}
	return 0;
}
