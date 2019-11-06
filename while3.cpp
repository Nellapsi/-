#include <iostream>

int main () {
    int i, n, k;
    std::cin >> n;
    i = 1;
    k = 1;
    while ( i <= n) {
        k *= i;
        i++;
    }
    std::cout << k << std::endl;
    return 0;
}