#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>


int main () {
    std::srand (time(nullptr));
    int b, f;
    std::cin >> b;
    std::vector <int> a(b);
    for (int i = 0; i < b; i++) {
        a [i] = std::rand() % (10 + 5 + 1) - 5;
        std::cout << i << ". " << a [i] << std::endl;
    }
    f = 0;
    for (int i = 1; i < b; i++) {
        if (a [f] < a [i]) {
            f = i;
        }
    }
    std::cout << "# max = " << f << " element = " << a [f] << std::endl;
    return 0;
}