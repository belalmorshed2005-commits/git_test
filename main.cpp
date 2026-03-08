#include <iostream>
int main(){
int a=2;int k=0;// a is prime ?
for(a=2;a<100;a++){
    if(a==4) continue ;
     for(int i=2;a>i*i;i++){
        if(a%i==0){
           k+=1;

        }

          

     }
              if(k==0){std::cout<<a;
            std::cout<<"\n";}
           




k=0;
}

return 0;

}