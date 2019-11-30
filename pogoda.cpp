#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>

int main () {
    int c;
    bool b = false;
    std::vector <int> a (31);
    std::srand (time (nullptr));
    for (int i = 1; i <= a.size(); i++) {
        a [i] = rand() % (10 + 5 + 1) - 5;
        std::cout << i << a [i] << std::endl;
    }
    for (int i = 0; i < a.size(); i++){
        if (a [i] < 0) {
            b = true;
            break;
        }
    }
    if (b) {
        std::cout << "temperaturi bili -" << std::endl;
    } else {
        std::cout << "temperatyri +" << std::endl;
    }
    return 0;
}