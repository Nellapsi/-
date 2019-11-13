#include <iostream>

int factorial (int n) {
    int k = 1;
    for ( int i = 1; i <= n; i++) {
        k *= i;
    }
    return k;
}

int main () {
    int n, m, s;
    std::cin >> n >> m;
    s = factorial (n) / (factorial (m) * factorial (n - m));
    std::cout << s <<std::endl;
    return 0;
}