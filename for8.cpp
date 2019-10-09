#include<iostream>

int main(){
    int n, i, j, k;
    std::cout<<"vvedite kol-vo"<<std::endl;
    std::cin>>n;
    for (i=n; i>=1; i--){
        std::cout<<std::endl;
        if(((i==1)||(i==n))){
            for(j=n; j>=1; j--){
                std::cout<<"*  ";
            }        
        }else{
            for(k=n; k>=1; k--){
                if(k==1||k==n){
                    std::cout<<"*  ";
                }else{
                    std::cout<<"   ";
                }
            }
        }
    }
    return 0;
}