#include <iostream>

using namespace std;
int isDivisible(int a[ ], int len, int divisor) ;
int main()
{   int numberArray[]={} ;
  int arraSize=sizeof(numberArray)/sizeof(int);
  int divisor=12  ;
    cout << isDivisible(numberArray, arraSize, divisor) << endl;
    return 0;
}

int isDivisible(int a[ ], int len, int divisor) {
for(int i=0;i<len;i++){
  if(!(a[i]%divisor==0))  {
    return 0;
  }

}
return 1;

}
