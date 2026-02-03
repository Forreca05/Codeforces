#include <iostream>
#include <cmath>

int main() {
	int input;
	std::cin >> input;
	int count = 1;
	while (input > 1) {
		if (input % 2 != 0) {
			count++;
			input--;
		}
		else {
			input /= 2;
		}
	}
	std::cout << count;
}
