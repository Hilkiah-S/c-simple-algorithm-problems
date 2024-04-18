#include <iostream>

using namespace std;
void reversingarray (int a[],int len){


int reversed [len];
for(int i=0;i<len;i++){

          reversed[i]=a[len-1-i];


}
 for (int i = 0; i < len; i++) {
       cout << reversed[i] << " ";
    }

}
int main()
{   int arrayordered[]={1,2,3,4,5,6,7};
 int arraysize=sizeof(arrayordered)/sizeof(int);
    reversingarray(arrayordered,arraysize);
    return 0;
}
