#include <iostream>

int fib (int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return fib (n - 1) + fib (n - 2);
}

int main () {
    int n, k;
    std::cin >> n;
    k = fib (n);
    std::cout << k << std::endl;
    return 0;
}