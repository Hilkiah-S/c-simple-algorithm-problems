#include <iostream>

using namespace std;

int isInertial(int a[ ], int len) {
int maximum=-999;
int oddCount=0;
int nevenGreaterthanodds=0;
int numberofmaxs=0;
for(int i=0;i<len;i++){
    if(a[i]>maximum){
        maximum=a[i];
    }
    if(a[i]%2!=0){
            /*for(int j=0;j<len;j++){
                if(a[j]%2==0){
                    if(a[i]<a[j]){
                        cout<<"even "<<a[j]<<"&"<<"odd"<<a[i]<<endl;
                 nevenGreaterthanodds++;}
                }
            }*/

        oddCount++;
    }

}





if(maximum%2!=0||oddCount<1){
        /*cout<<maximum<<" -" <<oddCount<<" -"<<nevenGreaterthanodds<<endl;*/
    return 0;}else{
        for(int i=0;i<len;i++){
    for(int j=0;j<len;j++){
        if(a[i]%2!=0&&a[j]%2==0){
            if(a[i]<a[j]&&a[j]!=maximum){
                return 0;
            }
        }
    }
}
            /*cout<<maximum<<"  " <<oddCount<<" "<<nevenGreaterthanodds;*/
        return 1;
    }












}

int main()
{int numberarray[]={2, 12, 12, 4, 6, 8, 11} ;
    cout << isInertial(numberarray,7) << endl;
    return 0;
}
