#include <iostream>


int main () {
    int n, k = 0;
    std::cin >> n;
    while (n != 0) {
        k = n % 10;
        n = n / 10;
        std::cout << k << std::endl;
    } 
    return 0;
}