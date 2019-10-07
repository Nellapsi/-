#include<iostream>
#include<string>
#include <cmath>

int main(){
    int a, b, c, x, D, x1, x2, y;
    std::cout<<"vvedite znachenia yrovnenia"<<std::endl;
    std::cin>>a>>b>>c;
    D=b*b-4*a*c; 
    y=std::sqrt(D);
    if(a==0){
        x=-(c/b);
        std::cout<<"a=0 no etomy x= "<<x<<std::endl;
    }else if (D<0){
            std::cout<<"kornei net"<<std::endl;
        }else if (D==0){
            std::cout<<"ect` 1 koren`"<<std::endl;
            x1=(-b+y)/(2*a);
            std::cout<<"koren` = "<<x1<<std::endl;
            }else{
                std::cout<<"est` 2 kornia"<<std::endl;
                x1=(-b+y)/(2*a);
                x2=(-b-y)/(2*a);
                 std::cout<<"1 koren`= "<<x1<<std::endl;
                std::cout<<"2 koren` = "<<x2<<std::endl;
            }
    return 0;
}