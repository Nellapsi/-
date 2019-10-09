#include<iostream>

int main(){
    int n, i, j;
    std::cout<<"vvedite kol-vo"<<std::endl;
    std::cin>>n;
    for(i=n; i>=1; i--){
        std::cout<<std::endl;
        for(j=i; j>=1; j--){
            std::cout<<"*";
        }
    }
    for(i=2; i<=n; i++){
        std::cout<<std::endl;
        for(j=1; j<=i; j++){
            std::cout<<"*";
        }
    }
    return 0;
}