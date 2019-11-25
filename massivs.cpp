#include <iostream> 
#include <vector>
#include <time.h>
#include <stdlib.h>


int main () {
    std::srand (time (nullptr));
    int b, c, t;
    c = 0;
    t = 1;
    std::cin >> b;
    std::vector <int> a(b);
    for (int i = 0; i < b; i++) {
        a [i] = std::rand() % (10 + 5 + 1) - 5;
    }

    while (c != 0) {
        for(int i = 1; i< b; i++){
            if (a [i] < a [i -1]) {
                c = a [i];
                a [i] = a [i - 1];
                a [i - 1] = c;
                t++;
            } 
        }
    }   
    for (int i = 0; i < b; i++) {
        std::cout << i << ". " << a [i] << std::endl;
    }
    return 0;
}