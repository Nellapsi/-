#include <iostream>

int main () {
    int n, r;
    r = 1;
    std::cin >> n;
    while (n != 0) {
        r *= n;
        std::cin >> n;
    }
    std::cout << r << std::endl;
    return 0;  
}