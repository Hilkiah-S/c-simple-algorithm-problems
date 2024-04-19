#include <iostream>

using namespace std;
int inlineSwap(int a[],int len);
int main()
{
    int arrayNumber[]={1,2,3,4,5,6};
    int arraySize=sizeof(arrayNumber)/sizeof(int);
    cout << inlineSwap(arrayNumber,arraySize)<< endl;
    return 0;
}

inlineSwap(int a[],int len){
    int swapingitem;
    for(int i=0;i<len-2;i++){
        swapingitem=a[i];
        a[i]=a[len-(1+i)];
        a[len-(1+i)]=swapingitem;
    }
    for(int i=0;i<len;i++){
        cout<<a[i];
    }
    cout<<endl;
    return 1;
}
