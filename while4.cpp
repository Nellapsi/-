#include <iostream>

int main () {
    int i, k, c, n, b;
    i = 1;
    k = 1;
    c = 1;
    std::cin >> n;
    if (n <= 2) {
        if (n > 0) {
            std::cout << "1" << std::endl;      
        } else if (n = 0) {
            std::cout << "0" << std::endl;
        } else {
            std::cout << "vvedite polojitel`noe chislo" << std::endl;
        }
    } 
    if (n > 2) {
        while (c <= n) {
            b = i + k;
            i = k;
            k = b;
            c++;
        }       
    } 
    std::cout << b << std::endl;
    return 0;
}