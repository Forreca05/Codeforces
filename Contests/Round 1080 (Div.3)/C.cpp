#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::vector<int> a(n);
        for (int i = 0; i < n; i++)
            std::cin >> a[i];

        int ops = 0;

        for (int i = 0; i < n - 1; i++) {
            if (a[i] == a[i+1] || a[i] + a[i+1] == 7) {
                ops++;
                i++; // saltar o próximo, já foi corrigido
            }
        }

        std::cout << ops << "\n";
    }

    return 0;
}

