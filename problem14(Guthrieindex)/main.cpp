#include <iostream>

using namespace std;
  int iterationCount=0;
int guthrieIndex(int n){

if(n!=1){

        if(n%2==0){
            n/=2;
            iterationCount++;
            guthrieIndex(n);
        }else{
            n=(n*3)+1;
            iterationCount++;

            guthrieIndex(n);

        }

}else if(n==1&&iterationCount==0){
return 0;
}
else{

return iterationCount;}

}


int main()
{
    cout <<  guthrieIndex(1) << endl;
    return 0;
}

