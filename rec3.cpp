#include <iostream>


int rec3 (int n, int b) {
    int k;
    k =  b * 10 + n % 10;
    if (n > 10) {
        k = rec3 (n / 10, k);
    }
    return k;
}

int main () {
    int n, b;
    b = 0;
    std::cin >> n;
    std::cout << rec3(n, b);
    return 0;
}