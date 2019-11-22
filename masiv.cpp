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
    return 0;
}