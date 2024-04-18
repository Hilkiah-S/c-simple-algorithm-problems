#include <iostream>
#include<vector>
using namespace std;

int isTrivalent(int a[],int len);
int checkIfDistinict(int b);
vector<int> distinctvalues;
int main()
{
    int arrayNumber[]={-1, 0, 1, -1, 0, 0};
    int arraySize=sizeof(arrayNumber)/sizeof(int);
    cout << isTrivalent(arrayNumber,arraySize) << endl;
    return 0;
}


isTrivalent(int a[],int len){
    if(len==0){
        return 0;
    }

for(int i=0;i<len;i++){
    checkIfDistinict(a[i]);
}
if(distinctvalues.size()==3){
    return 1;
}else{
return 0;
}

}

checkIfDistinict(int b){
for(int j=0;j<distinctvalues.size();j++){
    if(b==distinctvalues[j]){
        return 0;
    }
}
distinctvalues.push_back(b);

}
