#include <iostream>
#include<vector>
using namespace std;
int isVanilla(int a[],int len);
int main()
{   int arrayNumber[]= {1, 1,
11, 1111, 1111111};
int arraySize=sizeof(arrayNumber)/sizeof(int);
    cout << isVanilla(arrayNumber,arraySize) << endl;
    return 0;
}

isVanilla(int a[],int len){
vector<int> currentnumber;
int current;
int checkingFactor=a[0]%10;

for(int i=0;i<len;i++){
        if(a[i]<0){
            a[i]=(a[i]*-1);
        }
    current=a[i];
    while(current>0){
        currentnumber.push_back(current%10);
        current/=10;

    }
    for(int j=0;j<currentnumber.size();j++){
        if(!checkingFactor==currentnumber[j]){
            return 0;
        }

    }

}
return 1;
}
