#include <iostream>
#include <string>

int main(){  
    int a, b, c;
    std::cout<<"Enter a" <<std::endl;
    std::cin >>a;
    std::cout<<"Enter b" <<std::endl;
    std::cin>>b;
    if(a>b){
        c=a-b;
        std::cout<<"a-b="<<c<<std::endl;
    } else{
        c=a*b;
        std::cout<<"a*b="<<c<<std::endl;
    }
    return 0; 
}