#include <iostream> 

void rec (int n) {
    if (n / 10 != 0) {
        std::cout << n % 10 << std::endl;
        return rec (n / 10);
    } else std::cout << n;
}

int main () {
    int n;
    std::cin >> n;
    rec (n);
    return 0;
}