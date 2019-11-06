#include<iostream>

int main(){
    int i, n, j, k;
    std::cout<<"vvedi kol-vo"<<std::endl;
    std::cin>>n;
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
        for(k = n - 3; k >= (i - 2) / 2; k--) {
            std::cout<<" ";
        }
        for(j = 1; j <= i; j++) {
            std::cout<<"*";
        }
    }
    return 0;
}