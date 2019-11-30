#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>


int main () {
    int c, b, j;
    std::cin >> b;
    std::vector <int> a (b);
    std::srand (time (nullptr));
    for (int i = 0; i < b; i++) {
        a [i] = rand() % (100 - 1 + 1) + 1;
    }
    for (int i = 1; i < b; i++) {
        j = i - 1;
        c = a [i];
        while (j >= 0 && a [j] > c) {
            a [j + 1] = a [j];
            j--;
        }
        a [j + 1] = c; 
    }
    for (int i = 0; i < b; i++) {
        std::cout << i << ". " << a [i] << std::endl;
    }
    return 0;
}