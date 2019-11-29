#include <iostream>
#include <vector>


int main () {
    std::vector <int> a;
    int n;
    int b = 0;
    std::cout << "vvedite chisla, 0 zakonchit raboty" << std::endl;
    std::cin >> n;

    while (n != 0) {
        a.push_back(n);
        std::cin >> n;
    }

    for (int j = 0; j < a.size(); j++) {
        std::cout << j << ". " << a[j] << std::endl;
        b += a[j];
    }

    std::cout << "symma chisel ravna: " << b << std::endl;

    
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