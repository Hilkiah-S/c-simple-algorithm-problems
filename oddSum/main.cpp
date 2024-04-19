#include <iostream>

using namespace std;
int f(int a[]);
int main()
{
    int arrayNumber[]={1,2,3};

    cout <<f(arrayNumber) << endl;
    return 0;
}

f(int a[]){
int evenSum,oddSum=0;
for(int item:a){
    if(item%2==0){
        evenSum+=item;
    }else{
    oddSum+=item;
    }
}
return oddSum-evenSum;
}
