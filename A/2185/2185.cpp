#include <iostream>

int main() {
	int n,a;
	std::cin >> n;
	for(int i = 0; i < n; i++) {
		std::cin >> a;
		int init = 2;
		for(int j = 0; j < a; j++) {
			std::cout << init << " ";
			init++;
		}
		std::cout << std::endl;
	}
	return 0;
}
