#include <iostream>

using namespace std;
int repsEqual(int a[ ], int len, int n);
int main()
{   int arrayNumber[]={3, 2, 0, 5, 3};
int number=32053;
int arraySize=sizeof(arrayNumber)/sizeof(int);
    cout <<repsEqual(arrayNumber,arraySize,number)<< endl;

    return 0;
}
int repsEqual(int a[ ], int len, int n){
    int div=10;
    int reverseIndex=len-1;
    int currentDigit=-1;
    int newarray[len]={};
    int substractionSum=0;
for(int i=0;i<len;i++){
   newarray[i]=n%div;
  div*=10;
}
for(int i=0;i<len;i++){
        int divid=100;
if(i==0){
    if(!a[len-1]==newarray[i]){
            cout<<a[len-1]<<" "<<newarray[i];
        return 0;
    }else{
    substractionSum=newarray[i];
    }
}else{

if(((newarray[i]%divid-substractionSum)/(divid/10)==a[len-1-i])){
        cout<<i<<":"<<(newarray[i]%divid-substractionSum)/(divid/10)<<" Compare "<<a[len-1-i]<<endl;
  divid*=10;
  substractionSum+= newarray[i];

}else{
            cout<<"Err "<<i<<":"<<(newarray[i]%divid-substractionSum)/(divid/10)<<" Compare "<<a[len-1-i]<<endl;
return 0;
}
}
if(i==len-1){
    return 1;
}
}

if(reverseIndex==0){
    return 1;
}
}
