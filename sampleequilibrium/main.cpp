#include <iostream>

using namespace std;
int SampleEqui(int a[],int len);
int main()
{   int arrayNumber[]={1, 5, 3, 1, 1, 1, 1, 1, 1};
  int arraySize=sizeof(arrayNumber)/sizeof(int);
    cout << SampleEqui(arrayNumber,arraySize) << endl;
    return 0;
}

SampleEqui(int a[],int len){
int sum=0;
int suminit=0;
for(int i=0;i<len;i++){
    sum+=a[i];
}
for(int j=0;j<len;j++){

    if(suminit==sum-(suminit+a[j])){
        return j;
    }
     suminit+=a[j];
}
return -1;

}
