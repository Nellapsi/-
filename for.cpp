#include <iostream>

int main(){
    int i, j, n, k;
    std::cout<<"vvedite"<<std::endl;
    std::cin>> n;
    for(i=n; i>=1; i-=2){
        std::cout<<std::endl;
        for(k=n; k>=(i-2); k-=2){
            std::cout<<" ";
        }
        for(j=i; j>=1; j--){
            std::cout<<"*";
        }
    }
    for(i=3; i<=n; i+=2){
        std::cout<<std::endl;
        for(k=n; k>=(i-2); k-=2){
            std::cout<<" ";
        }
        for(j=1; j<=i; j++){
            std::cout<<"*";
        }
    }
    return 0;
}
