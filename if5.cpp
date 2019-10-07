#include<iostream>
#include<string>

int main(){
int a1, a2, c1, c2, h, b, v, n;
//a1,a2-координаты вершины; с1,с2 координаты произвольной точки; h-высота;b-длина; v,n-координаты вершин.
std::cout<<"vvedite koordinati vershini priam"<<std::endl;
std::cin>>a1>>a2;
std::cout<<"vvedite dliny priam"<<std::endl;
std::cin>>b;
if(b==0){
    std::cout<<"vvedite znac otlicnoe ot 0"<<std::endl;
}else{
    std::cout<<"vvedite visoty"<<std::endl;
    std::cin>>h;
    if(h==0){
        std::cout<<"vvedite znac otlicnoe ot 0"<<std::endl;
        }else {
            v=a1+b;
            n=a2+h;
            std::cout<<"vvedite koordinati tocki c"<<std::endl;
            std::cin>>c1>>c2;
        if(a1<v){
            a1=a1;
         v=v;
        }else{
            a1=a1+v;
            v=a1-v;
            a1=a1-v;
        }
        if(a2<n){
            a2=a2;
            n=n;
        }else{
            a2=a2+n;
            n=a2-n;
            a2=a2-n;
        }
      
            if (((c1>=a1)&&(c1<=v))&&((c2>=a2)&&(c2<=n))){
                if(((c1==a1)&&(c2==a2))||((c1==v)&&(c2==n))||((c1==a1)&&(c2==n))||((c1==v)&&(c2==a2))){
                std::cout<<"tocka legit na vershine"<<std::endl;
                }else if((((c1==a1)&&(a2<c2<n))||((c1==v)&&(a2<c2<n)))||(((c2==a2)&&(a1<c1<v))||((c2==n)&&(a1<c1<v)))){
                std::cout<<"tocka lejit na rebre"<<std::endl;
                    } else {
                std::cout<<"tocka lejit v priamoygolnike"<<std::endl;
                    }
            }else {
                std::cout<<"tocka lejit ne v primoygolnike"<<std::endl;
            }
            }
}
return 0;
}