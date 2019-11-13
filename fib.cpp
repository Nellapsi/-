#include <iostream>

int fib (int n) {
    int i, k, c, a;
    k = 0;
    c = 1;
    a = 0;
    if (n <= 0) {
        while (n <= 0) {
            std::cout << "vvedite pravilnoe chislo" << std::endl;
            std::cin >> n;
        }
    }
    for (i = 1; i <= n; i++) { 
        a = c + k;
        c = k;
        k = a;
    } 
    return a;
}

int main () {
    int n;
    std::cin >> n;
    std::cout << fib (n) <<std::endl;
    return 0;
}