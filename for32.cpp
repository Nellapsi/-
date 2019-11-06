#include <iostream>

int main () {
    int i, k, c, a, n;
    std::cin >> n;
    k = 1;
    c = 1;
    a = 0;
    if (n <= 0) {
        while (n <= 0) {
            std::cout << "vvedite pravilnoe chislo" << std::endl;
            std::cin >> n;
        }
    } else if (n < 3) {
        std::cout << 1 <<std::endl;
        return 0;
    }
    for (i = 3; i <= n; i++) { 
        a = c + k;
        c = k;
        k = a;
    }
    std::cout << a << std::endl; 
    return 0;
}