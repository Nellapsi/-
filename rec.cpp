#include <iostream> 

int rec (int n) {
    if (n < 1) {
        return n;
    }
    return rec (n) % 10;
}

int main () {
    int n;
    std::cin >> n;
    std::cout << rec (n);
    return 0;
}