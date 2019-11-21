#include <iostream>


int rec4 (int n, int b) {
    // b = b * 10 + n % 10 + 1;
    // if (n > 10) {
    //     b = rec4 (n / 10, b);
    // }
    // return b;
    if (n < 10) {
        return b * 10 + (n + 1) % 10;
    }
    return rec4(n / 10, b * 10 + (n + 1) % 10);
}

int main () {
    int n, b;
    b = 0;
    std::cin >> n;
    std::cout << rec4 (n, b);
    return 0;
}