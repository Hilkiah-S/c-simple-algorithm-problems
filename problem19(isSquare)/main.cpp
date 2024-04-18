#include <iostream>


int isSquare(int n);
int main(){
  std::cout<<isSquare(-4);
}

int isSquare(int n){
    if(n>0){
for(int i=0;i<n;i++){
    if(i*i==n){
        return 1;
    }
}}
return 0;

}
