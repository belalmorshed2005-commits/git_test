#include <iostream>
#include <cmath>
int main() {
int a;int k=0;
for(int a=2;a<10;a++){
for(int i=2;i<a;i++){
    if(a%i==0){
k=k+1;}
    }
if(k==0){

    std::cout<<a;
}
k=0;
}
return 0;


}




