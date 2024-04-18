#include <iostream>

using namespace std;

int nUpCount(int a[],int len,int n){
    int counter=0;
    int prev=0;
    for(int i=0;i<len;i++){


     if(prev<=n&&(a[i]+prev)>n){
        counter++;


     }
      prev+=a[i];
    }

    return counter;

}

int main(){
int a[] = {2,3,1,-6,8,-3,-1,2};
int n=8;
cout<<nUpCount(a,n,5);

}
