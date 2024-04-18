#include <iostream>

using namespace std;

int primeCount(int start,int ended){
    int primeCounter=0;

for(int i=start;i<=ended;i++){
        if(i>1){
   if((i%2!=0&&i%3!=0&&i%5!=0)){
       primeCounter++;

   }
   if(i==3||i==5||i==2){
    primeCounter++;}
}
if(i==1){
    primeCounter++;}
}
return primeCounter;
}

int main()
{
    cout << primeCount(1,3) << endl;
    return 0;
}
