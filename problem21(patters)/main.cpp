#include <iostream>

using namespace std;
int matches(int a[],int len,int p[]);
int main()
{
    int A[] = {1,  2,  3, -5, -5,  2, 3, 18} ;
    int arraySize=sizeof(A)/sizeof(int);
    int P[]={3,3, -2, 3} ;
    cout << matches(A,arraySize,P)<< endl;
    return 0;
}

matches(int a[],int len,int p[]){
int intial=0;
for(int i=1;i<p[0];i++){
    for(int j=intial;j<(p[i]>0?p[i]:(p[i]*-1));j++){
      if(p[i]>0){

        if(a[j]<0){

            return 0;
        }
      }
      if(p[i]<0)
      {
      if(a[j]>0){

        return 0;
      }
      }
   intial+=(p[i]>0?p[i]:(p[i]*-1))-1;
    }
}
return 1;
}
