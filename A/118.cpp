#include <iostream>
#include <cctype>

int main() {
    std::string s;
    std::cin >> s;
    for (char c : s) {
        char d = tolower(c);
        if (d == 'a' || d == 'e' || d == 'i' || d == 'o' || d == 'u' || d == 'y') {
            continue;
        }
        if (isalpha(d)) {
            std::cout << '.' << d;
        }
    }
    return 0;
}