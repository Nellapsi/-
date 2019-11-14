#include <iostream>
#include <string>

void clock (int n, int z) {
    int i, j, k, q;
    for (i = n; i >= 1; i -= 2) {
        for(k = 0; k < (n - i) / 2 + z; k++) {
            std::cout <<" ";
        }
        for(j = 0; j < i; j++){
            std::cout <<"*";
        }
        std::cout<<std::endl;
    }
    for(i = 3; i <= n; i += 2) {
        std::cout<<std::endl;
        for (q = z; q >= 0; q--) {
            std::cout << " ";
        }
        for(k = n / 2; k >= (i - 2) / 2; k--) {
            std::cout<<" ";
        }
        for(j = 1; j <= i; j++) {
            std::cout<<"*";
        }
    }
}

int main () {
    int n, z;
    z = 0;
    std::cin >> n;
    for (int i = n; i >= 1; i -= 2) {
        clock (i, z);
        z++;
    }
    for (int i = 3; i <= n ; i += 2){
        z--;
        clock (i, z);
    }
    return 0;
}