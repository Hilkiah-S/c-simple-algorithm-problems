#include <iostream>

using namespace std;
int stantonMeasure(int a[ ], int len) {
    int onescount=0;
    int secondcount=0;
for(int i=0;i<len;i++){
   if(a[i]==1){
    onescount++;
   }
}
for(int i=0;i<len;i++){
   if(a[i]==onescount){
    secondcount++;
   }
}

return secondcount;

}

int main()
{   int arraydata[]={1, 3, 1, 1, 3, 3, 2, 3, 3, 3, 4}  ;
   int arraysize=sizeof(arraydata)/sizeof(int);
    cout << stantonMeasure(arraydata,arraysize) << endl;
    return 0;
}
