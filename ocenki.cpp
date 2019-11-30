#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>


int main () {
    bool g = false;
    bool d = false;
    std::srand (time (nullptr));
    std::vector <int> a (25);
    for (int i = 0; i <= a.size(); i++) {
        a [i] = rand() % (5  - 1 + 1) + 1;
        std::cout << i << ". " << a [i] << std::endl;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a [i] < 3) {
            d = true;
            break; 
        } else if (a [i] != 5) {
            g = true;
        }
    }
    if (!d && !g) {
        std::cout << "5" << std::endl;
    } else if (d) {
        std::cout << "2" << std::endl;
    } else {
        std::cout << "normal`ni" << std::endl;
    }
    return 0;
}
