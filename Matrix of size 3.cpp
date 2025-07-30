#include<iostream>
using namespace std;
int main()
{
    int i,j,mat[3][3];
    cout<<"Enter elements of matrix:";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>mat[i][j];
        }
    }
    cout<<"Matrix is:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<" "<<mat[i][j];
        }
        cout<<endl;
    }
    return 0;
}