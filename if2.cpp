#include<iostream>
#include<string>

int main(){
    int a, b, c;
    std::cout<<"enter the first point of the segment"<<std::endl;
    std::cin>>a;
    std::cout<<"enter the second point of the segment"<<std::endl;
    std::cin>>b;
    if (a==b){
        std::cout<<"enter different point values"<<std::endl;
    }else{
    std::cout<<"enter any point"<<std::endl;
    std::cin>>c;
    if (a<b){
        if (c==a){
            std::cout<<"point is equal to the beginning of the segment"<<std::endl;
        }else if (c==b){
            std::cout<<"point equals end of segment"<<std::endl;
        } 
        if((c>a)&&(c<b)){
        std::cout<<"the point is between the beginning and the end of the segment"<<std::endl;
        }else if (c<a){
            std::cout<<"the point is in front of the segment"<<std::endl;
        }else if (c>b){
            std::cout<<"the point is beyond the segment"<<std::endl;
        }
    }else {
        if(c==b){
            std::cout<<"point is equal to the beginning of the segment"<<std::endl;
        }else if (c==a){
            std::cout<<"point equals end of line"<<std::endl;
        }
        if ((c>b)&&(c<a)){
            std::cout<<"the point is between the beginning and the end of the segment"<<std::endl;
        }else if(c<b){
            std::cout<<"the point is in front of the segment"<<std::endl;
        }else if(c>a){
            std::cout<<"the point is beyond the segment"<<std::endl;
        }
    }
    }
return 0;
}