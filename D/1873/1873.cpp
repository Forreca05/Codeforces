#include <iostream>

int main() {
	int n, l, p, count = 0;
	std::string s;
	std::cin >> n;
	for (int i = 0; i < n ; i++) {
		std::cin >> l >> p;
		std::cin >> s;
		int rep = p;
		for (int j = 0; j < l; j++) {
			if (s[j] == 'B') {
				if (rep == p) {
					rep--; 
					count++;
				}
				else if (rep < p) {rep--;}
			}
			else if (s[j] == 'W' && rep < p) rep--; 
			if (rep == 0) rep = p;
		}
		std::cout << count << std::endl;
		count = 0;
	}
	return 0;
}

