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
        a [i] = rand()  % (1000 - 1 + 1) + 1; 
    }

    std::sort(a.begin (), a.end ());

    for (int i = 0; i < b; i++) {
        std::cout << i << ". " << a [i] << std::endl;
    }

    std::cout << "vvedite chislo " << std::endl;
    std::cin >> c;
    
    bool t = false;
    v = a.size ();
    int f = 1;
    while (!t) {
        s = v / 2;
        if (c < a [s]) {
            v = s;
        } else if (c > a [s]) {
            v = s + a.size ();
        } else {
            std::cout << s << std::endl;
            break;
        }
        f++;
        if (f > 7) {
            f = true;
        }
    }
    if (f) {
    std::cout << "net" << std::endl;
    }
    std::cout << f;
    return 0;
}