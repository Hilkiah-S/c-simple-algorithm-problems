#include <iostream>

using namespace std;

int main()
{
    struct CV{
        string name;
    int age;
    string education;
    };
    CV one;
    one.name="Abebe";
    one.age=23;
    one.education="BSc";
     CV two;
    two.name="Kebede";
    two.age=26;
    two.education="MSc";

    cout<<one.name<<" "<<one.age<<" "<<one.education<<"\n";
    cout<<two.name<<" "<<two.age<<" "<<two.education<<"\n";
    return 0;
}
