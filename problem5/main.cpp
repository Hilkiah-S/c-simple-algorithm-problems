#include <iostream>

using namespace std;
int f(int a[], int len){
    int maxium=0;
    int secondmax=0;
for(int i=0;i<len;i++){
    if(a[i]>maxium){
        maxium=a[i];
    }
}
for(int i=0;i<len;i++){
    if(a[i]>secondmax&&a[i]<maxium){
        secondmax=a[i];
    }
}
if(secondmax==0){
    return -1;
}
return secondmax;
}
int main()
{   int arrayone[]={1, 1, 1, 1};
    cout << f(arrayone,4) << endl;
    return 0;
}
