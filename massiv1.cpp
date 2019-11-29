#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>


int main () {
    int b, c, j, min;
    std::srand(time(nullptr));
    std::cin >> b;
    std::vector <int> a (b);
    for (int i = 0; i < b; i++) {
        a [i] = rand() % (10 - 1 + 1) + 1;
    }

    for (j = 0; j < b; j++) {
        min = j;
        for (int i = j + 1; i < b; i++) {
            if (a [min] > a [i]) {
                min = i;
            }
        }
        c = a [j];
        a [j] = a [min];
        a [min] = c;
    std::cout << j << ". " << a [j] << std::endl;
    }
    
    return 0;
}