#include <iostream>
#include <stdlib.h>
#include <time.h>

int main () {
    int n, k;
    k = 1;
    std::srand (time (nullptr));
    int r = std::rand() % (100 - 1 + 1) + 1;
    std::cin >> n;
    while (n != r) {
        if (n > r) {
            std::cout << "men`che" << std::endl;
        } else {
            std::cout << "bol`che" <<std::endl;
        }
        k++;
        std::cin >> n;
    }
    std::cout << "ygadali chislo s " << k << " popitki" << std::endl;
    return 0;
}