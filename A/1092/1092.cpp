#include <iostream>

int main() {
	int n, l, t;
	std::cin >> n;
	std::string letters = "abcdefghijklmnopqrstuvwxyz";
	while (n--) {
		std::cin >> l >> t;
		int rep = 0;
		std::string final;
		std::string nova = letters.substr(0,t);
		while(l--) {
			if(rep==t) rep = 0;
			final += nova[rep];
			rep++;
		}
		std::cout << final << std::endl;
	}
	return 0;
}
