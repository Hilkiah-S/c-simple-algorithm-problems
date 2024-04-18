#include <iostream>

using namespace std;

int main()
{
    string names[]={"Abebe","Kebede","Mesfin","Aschalew"};
for(string name:names){
cout<<name+"\n";
}
cout<<"THe size of the length of the array is "<<sizeof(names)/sizeof(string)<<"\n";

for(int i=0;i<sizeof(names)/sizeof(string);i++){
    cout<<names[i]<<"\n";
}

    return 0;
}
