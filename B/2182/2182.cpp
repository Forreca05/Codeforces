#include <iostream>

int contas(int a, int b) {
	int init = 1, count = 0, temp = 0;
	while (a > 0 || b > 0) {
		if (a - init < 0) break;
		a -= init;
		count++;
		temp = a;
		a = b;
		b = temp;
		init *= 2;
	}
	return count;
}
		
int main() {
	int n, a ,b;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> a >> b;
		int op1 = contas(a,b), op2 = contas(b,a);
		std::cout << std::max(op1,op2) << std::endl;
	}
	return 0;
}
