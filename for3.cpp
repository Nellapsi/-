#include<iostream>

int main(){
    int i, n;
    std::cout<<"kol-vo   max"<<std::endl;
    std::cin>>n;
    for(i=n; i>=1; i--){
        std::cout<<i<<std::endl;
    }
    for(i=2; i<=n; i++){
        std::cout<<i<<std::endl;
    }
return 0;
}