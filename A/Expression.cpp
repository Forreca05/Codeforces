#include <iostream>
#include <algorithm>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    int res = std::max({
        a + b + c,
        a + b * c,
        a * (b + c),
        (a + b) * c,
        a * b + c,
        a * b * c
    });

    std::cout << res << std::endl;
    return 0;
}
