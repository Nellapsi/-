#include<iostream>
#include<string>

int main(){
    int a1, a2, b1, b2, c1, c2;
    std::cout<<"vvedite koordinati tocki a"<<std::endl;
    std::cin>>a1>>a2;
    std::cout<<"vvedite koordinati tocki b"<<std::endl;
    std::cin>>b1>>b2;
    if ((a1==b1)||(a2==b2)){
        std::cout<<"vvedite raznii tocki"<<std::endl;
    }else{
    std::cout<<"vvedite koordinati tocki c"<<std::endl;
    std::cin>>c1>>c2;
    }
    if(a1<b1){
        a1=a1;
        b1=b1;
    }else{
        a1=a1+b1;
        b1=a1-b1;
        a1=a1-b1;
    }
    if(a2<b2){
        a2=a2;
        b2=b2;
    }else{
        a2=a2+b2;
        b2=a2-b2;
        a2=a2-b2;
    }
        if (((c1>=a1)&&(c1<=b1))&&((c2>=a2)&&(c2<=b2))){
        if(((c1==a1)&&(c2==a2))||((c1==b1)&&(c2==b2))||((c1==a1)&&(c2==b2))||((c1==b1)&&(c2==a2))){
            std::cout<<"tocka legit na vershine"<<std::endl;
        }else if((((c1==a1)&&(a2<c2<b2))||((c1==b1)&&(a2<c2<b2)))||(((c2==a2)&&(a1<c1<b1))||((c2==b2)&&(a1<c1<b1)))){
            std::cout<<"tocka lejit na rebre"<<std::endl;
        } else {
            std::cout<<"tocka lejit v priamoygolnike"<<std::endl;
        }
    }else {
        std::cout<<"tocka lejit ne v primoygolnike"<<std::endl;
    } 
    return 0;
}