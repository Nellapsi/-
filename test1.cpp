#include <iostream>

int main() {
    int i, n;
    std::cout << "Vvedite chislo" << std::endl;
    std::cin >> n;
    for (i = 2; i < n; i++){
        if(n % i == 0 ){
            std::cout << "ne prostoe" <<std::endl;
            break;
        } else {
           std::cout << "prostoe" <<std::endl;
        }
    }
    return 0;
}