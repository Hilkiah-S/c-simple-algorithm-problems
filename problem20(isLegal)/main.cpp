#include <iostream>
using namespace std;

int isLegalNumber(int a[],int len,int base);
int convertToBase10(int a[],int len,int base);
int power(int base,int exp);
int main(){
int arrayNumber[]={1, 1,0,1};
int arraySize=sizeof(arrayNumber)/sizeof(int);
int base=2;
std::cout<<convertToBase10(arrayNumber,arraySize,base);

}
int isLegalNumber(int a[],int len,int base){
for(int i=0;i<len;i++){

    if(a[i]>base){
        return 0;
    }
}
return 1;
}

int power(int base,int exp){
    int mod=1;
    if(exp==0){

        return 1;
    }
for(int i=0;i<exp;i++){
   mod*=base;

}
return mod;
}


int convertToBase10(int a[],int len,int base){
    int sum=0;
for(int i=0;i<len;i++){

    if(a[i]>base){
        return -1;
    }else{
    sum+=(a[i]*power(base,i));

    }

}
return sum;
}



