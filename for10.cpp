#include<iostream>

int main(){
    int i, n, j, k;
    std::cout<<"vvedi kol-vo"<<std::endl;
    std::cin>>n;
    for (i=n; i>=1; i=(i-2)){
        std::cout<<std::endl;
        for(k=n; k>=(i-2); k=(k-2)){
            std::cout<<" ";
        }
        for(j=i; j>=1; j--){
            std::cout<<"*";
        }
    }
    for(i=3; i<=n; i=(i+2)){
        std::cout<<std::endl;
        for(k=n; k>=(i-2); k=(k-2)){
            std::cout<<" ";
        }
        for(j=1; j<=i; j++){
            std::cout<<"*";
        }
    }
    return 0;
}