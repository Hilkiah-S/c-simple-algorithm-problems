#include <iostream>
#include<vector>
using namespace std;
int isIsolated(long n);
int main()
{
    cout<<isIsolated(8);
    return 0;
}

isIsolated(long n){
    if(n > 2097151 || n<1){
        return -1;
    }
vector<long>sqreserve,cubereserve;
long squared=n*n;
long cubed=squared*n;

while(squared>0){
    sqreserve.push_back(squared%10);
    squared/=10;
}

while(cubed>0){
  cubereserve.push_back(cubed%10);
  cubed/=10;
}
for(int i=0;i<sqreserve.size();i++){
    for(int j=0;j<cubereserve.size();j++){
        if(sqreserve[i]==cubereserve[j]){
            return 0;
        }
    }
}

return 1;
}
