#include<iostream>
#include<string>

int main(){
    int a, c;
    std::cout<<"enter a"<<std::endl;
    std::cin>>a;
    c=a%2;
    if (c==0){
        std::cout<<a<<" chetnoe"<<std::endl;
    }else{
        std::cout<<a<<" nechetnoe"<<std::endl;
    }
    return 0;
}