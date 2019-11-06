#include <iostream>

int main () {
    int i, k, c, n, b;
    i = 1;
    k = 1;
    c = 1;
    std::cin >> n;
    if (n < 2) {
        
    }
    if (n > 0) {
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