#include <iostream>

int main () {
    int n, k;
    std::cin >> n;
    k = 1;
    for ( int i = 1; i <= n; i++) {
        k *= i;
    }
    std::cout << k << std::endl;
    return 0;
}