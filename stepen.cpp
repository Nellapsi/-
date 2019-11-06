#include <iostream>

int main() {
    int a, b, i, c;
    c = 1;
    std::cin >> a >> b;
    for (i = 0; i < b; i++) {
        c = c * a; 
    }
    std::cout << c;
    return 0;
}
