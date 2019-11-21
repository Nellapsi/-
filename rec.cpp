#include <iostream> 

void rec (int n) {
    // if (n / 10 != 0) {
    //     std::cout << n % 10 << std::endl;
    //     return rec (n / 10);
    // } else std::cout << n;
    if (n == 0) {
        return;
    }
    std::cout << n % 10;
    rec(n / 10);
}

int main () {
    int n;
    std::cin >> n;
    rec (n);
    return 0;
}