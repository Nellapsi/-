#include <iostream>

int main () {
    int i, j, n;
    std::cin >> n;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j <= i && (j <= (n - 1) - i) ) {
                std::cout << "* ";
            } else {
                std::cout << ".";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}