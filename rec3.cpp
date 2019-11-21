#include <iostream>


int rec3 (int n, int b) {
    // b = b * 10 + n % 10;
    // if (n > 10) {
    //     b = rec3 (n / 10, b);
    // }
    // return b;
    if (n < 10) {
        return b * 10 + n % 10;
    }
    return rec3(n / 10, b * 10 + n % 10);
}

int main () {
    int n, b;
    b = 0;
    std::cin >> n;
    std::cout << rec3 (n, b);
    return 0;
}