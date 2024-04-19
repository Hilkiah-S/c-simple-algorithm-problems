#include <iostream>
#include<map>
using namespace std;
int isSequentiallyBounded(int a[],int len);
int main()
{  int arrayNumber[]={2, 3, 3, 99, 99, 99, 99, 99} ;
int arraySize=sizeof(arrayNumber)/sizeof(int);
    isSequentiallyBounded(arrayNumber,arraySize);
    return 0;
}

isSequentiallyBounded(int a[],int len){

map<int,int>mp;
for(int i=0;i<len;i++){
    if(i!=len-1){
        if(a[i]>a[i+1]){

            return 0;
        }
        if(mp.find(a[i])==mp.end()){
            mp[a[i]]=0;
        }
        mp[a[i]]++;

    }else{
    mp[a[i]]++;}
}
for(map<int,int>::iterator itr=mp.begin();itr!=mp.end();itr++){
    if(!(*itr).first>=(*itr).second){
            cout<<"Endl";
        return 0;
    }
}

return 1;
}
