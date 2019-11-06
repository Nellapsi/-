#include <iostream>

int main () {
    int i, k, c, n, b;
    i = 1;
    k = 1;
    c = 1;
    b = 0;
    std::cin >> n;
    if (n <= 2) {
        if (n > 0) {
            std::cout << 1 << std::endl;      
        } else if (n == 1) {
            std::cout << 0 << std::endl;
        } else {
            std::cout << "vvedite polojitel`noe chislo" << std::endl;
        }
        return 0;
    }
     
    if (n > 0) {
        while (c <= (n - 2)) {
            b = i + k;
            i = k;
            k = b;
            c++;
        }
        std::cout << b << std::endl;       
    } 
    return 0;
}