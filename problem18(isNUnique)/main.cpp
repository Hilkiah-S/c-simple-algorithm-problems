#include <iostream>

using namespace std;
int isNUnique(int a[ ], int len, int n);
int main()
{   int arrayNum[]={1}  ;
   int arraySize=sizeof(arrayNum)/sizeof(int);
   int number=4;
    cout <<isNUnique(arrayNum,arraySize, number)<< endl;
    return 0;
}

int isNUnique(int a[ ], int len, int n){
int totalCombinations=0;
if(len>1){
for(int i=0;i<len;i++){
  for(int j=0;j<len;j++){
       if(!j==i){
            if(a[i]+a[j]==n){
                totalCombinations++;
            }
       }

  }
}
if(totalCombinations==1){
    return 1;
}}
return 0;

}
