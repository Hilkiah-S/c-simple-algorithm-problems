#include <iostream>
#include <cmath>
#include <typeinfo>
using namespace std;

int isPerfectSquare(int n){

   int i=0;
   while(true){
    if(i*i>n){
        return i*i;
    }
    i++;
   }


}

int main()
{   int a;
    cout << "Hello world!" << endl;
    cin>>a;
    cout<<isPerfectSquare(a)<<endl;

    return 0;
}





