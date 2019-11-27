#include <iostream> 
#include <vector>
#include <time.h>
#include <stdlib.h>


int main () {
    std::srand (time (nullptr));
    int b, c;
    bool d = false;
    std::cin >> b;
    std::vector <int> a (b);
    for (int i = 0; i < b; i++) {
        a [i] = std::rand() % (10 - 1 + 1) + 1;
    }

    while (!d) {
        d = true;
        for(int i = 1; i < b; i++){
            if (a [i] < a [i -1]) {
                c = a [i];
                a [i] = a [i - 1];
                a [i - 1] = c;
                d = false;
            }
        }
    }   
    for (int i = 0; i < b; i++) {
        std::cout << i << ". " << a [i] << std::endl;
    }
    return 0;
}