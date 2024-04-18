#include <iostream>

using namespace std;

int isPerfectSquare (int numbertocheck){
    int i=0;
while(i<numbertocheck){
    if(i*i==numbertocheck){

      return 1;
    }
    i++;
}
return 0;
}

int countSquarePairs(int a[ ], int len){
    int numberOfSquarePairs=0;
    if(len>1){
for(int i=0;i<len;i++){
   for(int j=0;j<len;j++){
    if(a[i]<a[j] && a[i]>0&&a[j]>0){
      if(isPerfectSquare(a[i]+a[j])){

       numberOfSquarePairs++;
       //cout<<numberOfSquarePairs;
      }
    }
   }
}}
return numberOfSquarePairs;
}
int main()
{   int arrayOfNumbers[]={9, 0, 2, -5, 7};
    int arraySize=sizeof(arrayOfNumbers)/sizeof(int);
    cout <<countSquarePairs(arrayOfNumbers,arraySize)<< endl;
    return 0;
}
