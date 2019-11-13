#include <iostream>
#include <string>

void clock (int n) {
    int i, j, k;
    for (i = 0; i <= (n - 1) ; i += 2) {
        std::cout<<std::endl;
        for(k = 0; k <= (i + 2) / 2; k++) {
            std::cout <<" ";
        }
        for(j = i; j<=(n - 1); j++){
            std::cout <<"*";
        }
    }
    for(i = 3; i <= n; i += 2) {
        std::cout<<std::endl;
        for(k = n / 2; k >= (i - 2) / 2; k--) {
            std::cout<<" ";
        }
        for(j = 1; j <= i; j++) {
            std::cout<<"*";
        }
    }
}

int main () {
    int n;
    std::cin >> n;
    for (int i = n; i >= 1; i -= 2) {
        clock (i);
    }
    for (int i = 3; i <= n ; i += 2){
        clock (i);
    }
    return 0;
}