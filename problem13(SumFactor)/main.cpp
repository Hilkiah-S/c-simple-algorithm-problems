#include <iostream>

using namespace std;
int sumFactor(int a[ ], int len);


int main()
{   int arrayNumbers[]={0, 0, 0} ;
int arraysize=sizeof(arrayNumbers)/sizeof(int);
    cout <<sumFactor(arrayNumbers, arraysize)<< endl;
    return 0;
}

int sumFactor(int a[ ], int len){
int sum=0;
int sumCount=0;
for(int i=0;i<len;i++){
    sum+=a[i];

}
for(int i=0;i<len;i++){
    if(a[i]==sum){
       sumCount++;
    }
}
return sumCount;
}
