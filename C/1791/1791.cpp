#include <iostream>

int main() {
    int n;
    std::cin >> n;

    while (n--) {
        int len;
        std::string num;
        std::cin >> len >> num;

        while (num.size() > 1 && num.front() != num.back()) {
            num = num.substr(1, num.size() - 2);
        }

        std::cout << num.size() << "\n";
    }

    return 0;
}

