#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>


int random () {
    int r;
    std::srand (time (nullptr)); 
    r = std::rand() % (10 + 5 + 1) - 5;
    return r;
}

int main () {
    int b;
    std::cout << "vvedite kolvo elementod" << std::endl;
    std::cin >> b;
    std::vector <int> a(b);
    for (int i = 0; i < b; i++) {
        a [i] = random ();
        std::cout << a [i] << std::endl;
    }
    return 0;
}