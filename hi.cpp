#include <iostream>
#include <string>

int main(){  
    int a, b, c;
    std::cout<<"Enter a" <<std::endl;
    std::cin >>a;
    std::cout<<"Enter b" <<std::endl;
    std::cin>>b;
    c=a;
    a=b;
    b=c;
    std::cout<<"a="<<a<<std::endl;
    std::cout<<"b="<<b<<std::endl;
    return 0; 
}