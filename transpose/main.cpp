#include <iostream>

using namespace std;

int main()
{   int transpose[3][2];
    int grid[2][3] = { {1, 2, 3}, {4, 5, 6} };
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
           transpose[j][i]=grid[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
