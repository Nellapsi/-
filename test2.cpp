#include <iostream>


int task (int a, int b) {
    if (b == 0) return a;
    return task (b, a % b);
}

int main () {
    std::cout << task (18, 24) << std::endl;
    return 0;
}