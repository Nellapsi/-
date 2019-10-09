#include<iostream>

int main(){
    int i, n, j;
    std::cout<<"vvedite col-vo"<<std::endl;
    std::cin>>n;
    for(j=n; j>=1; j--){
        std::cout<<std::endl;
        for(i=n; i>=1; i--){
            std::cout<<"*  ";
        }
    }
return 0;    
}