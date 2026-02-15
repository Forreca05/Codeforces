#include <iostream>
#include <vector>
#include <algorithm>

int solve(std::vector<int>& a) {
	int count = 0;
	for (int i = 1; i < a.size() / 2 + 1; i++) {
		if (a[i-1] > a[i*2 - 1]) {
			int temp = a[i*2-1];
			a[i*2-1] = a[i-1];
			a[i-1] = temp;
			count++;
		}
	}
	return count;
}

int main() {
	int t,n,a;
	std::cin >> t;
	while (t--) {
		std::vector<int> numbers;
		std::cin >> n;
		while (n--) {
			std::cin >> a;
			numbers.push_back(a);
		}
		while (true) {
			int conta = solve(numbers);
			if (conta == 0) break;
		}

		std::vector<int> final = numbers; 
		std::sort(final.begin(), final.end()); 

		if (numbers == final) std::cout << "YES\n"; 
		else std::cout << "NO\n";	}
	return 0;
}
