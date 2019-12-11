#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include <algorithm> 


int main () {
    int b, c, s, v, d;
    std::cin >> b;
    std::srand (time (nullptr));
    std::vector <int> a (b);
    for (int i = 0; i < b; i++) {
        a [i] = rand()  % (10 - 1 + 1) + 1; 
    }

    std::sort(a.begin (), a.end ());

    for (int i = 0; i < b; i++) {
        std::cout << i << ". " << a [i] << std::endl;
    }

    std::cout << "vvedite chislo " << std::endl;
    std::cin >> c;
    
    bool t = false;
    v = a.size ();
    while (!t) {
        s = v / 2;
        if (c < a [s]) {
            v = s;
        } else if (c > a [s]) {
            v = s + a.size ();
        } else if ( c == a [s]) {
            d = s;
            for (int i = s;;i--) {
                if (c != a [i]) {
                    t = true;
                    break;
                } else {
                    d = i;
                }
            }
        }
    }
    std::cout << d;
    return 0;
}