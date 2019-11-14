#include <iostream>

int main () {
    int i, k, c, a, n;
    std::cin >> n;
    k = 0;
    c = 1;
    a = 0;

    while (n <= 0) {
        std::cout << "vvedite pravilnoe chislo" << std::endl;
        std::cin >> n;
    }

    for (i = 1; i <= n; i++) { 
        a = c + k;
        c = k;
        k = a;
    }
    std::cout << a << std::endl; 
    return 0;
}