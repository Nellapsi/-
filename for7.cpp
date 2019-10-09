#include<iostream>

int main(){
    int n, i;
    std::cout<<"vvedite col-vo"<<std::endl;
    std::cin>>n;
    for(i=1; i<=n; i++){
        if(i<n){
            std::cout<<i<<", ";
        }else{
            std::cout<<i;
        }
    }
    return 0;
}
