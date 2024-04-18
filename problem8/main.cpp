#include <iostream>

using namespace std;

int isGuthrieSequence(int a[ ], int len) {
    int rightNumber=0;
    if(a[len-1]==1){
for(int i=0;i<len;i++){
    if(i!=len-1){
    if(a[i]%2==0){

       rightNumber=a[i]/2;
       if(rightNumber!=a[i+1]){
               cout<<"nxt"<<a[i+1]<<endl;
            cout<<"even"<<rightNumber<<endl;
       return 0;
       }
    }else{
    rightNumber=(a[i]*3)+1;
    if(rightNumber!=a[i+1]){
              cout<<"nxt"<<a[i+1]<<endl;
              cout<<"odd"<<rightNumber;
        return 0;
    }
    }}

    }
     return 1;
    }else{
    return 0;}
}


int main()
{   int arraysend []={7,  22, 11, 34, 17, 52, 26, 13, 40, 20, 10, 5, 16, 8, 4, 2, 1 }  ;
int arraylength=sizeof(arraysend)/sizeof(int);
    cout << isGuthrieSequence(arraysend,arraylength) << endl;
    return 0;
}
