#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>


int main () {
    std::srand (time (nullptr));
    int b, n, i;
    bool found;
    found = false;
    std::cin >> b;
    std::vector <int> a (b);
    for (i = 0; i < b; i++) {  
        a [i] = std::rand() % (10 + 5 + 1) - 5;
        std::cout << i << ". " << a[i] << std::endl;
    }
    std::cin >> n;
    for(int j = 0; j < b; j++) {
        if (n == a[j]){
            std::cout << "pervi raz chiclo bilo v " << j << " elemente" << std::endl;
            found = true;
            break;
        }
    }
    if (!found) {
        std::cout << "takogo chisla net" << std::endl;
    }
    return 0;
}