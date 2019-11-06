#include <iostream>

int main () { 
    int i, r;
    r = 1;
    std::cin >> i;
    while (i != 0) { 
        r *= i;
        std::cin >> i;
    }
    std::cout << "proizvedenie = " << r;
    return 0;
}