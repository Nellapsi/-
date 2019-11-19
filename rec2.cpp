#include <iostream>

void rec2 (int n) {
    int k = 0;
    if (n / 10 != 0) {
        if (n % 10 + 1 < 10) {
            std::cout << n % 10 +1;
        } else {
            std::cout << 0;
        }
        return rec2 (n / 10);
    } else if (n + 1 < 10) {
        std::cout << n + 1;
    } else {
        std::cout << 0;
    }
}

int main () {
    int n;
    std::cin >> n;
    rec2 (n);
    return 0;
}