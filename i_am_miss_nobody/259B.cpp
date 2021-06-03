#include<bits/stdc++.h>
using namespace std;
int main()
{
    int square[3][3],x,y,z;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>square[i][j];
        }
    }

    x=(square[1][2]-square[0][1]+square[0][2]+square[2][0])/2;
    y=x-square[1][0]-square[1][2]+square[0][1]+square[0][2];
    z=square[0][2]+square[2][0]-x;


    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==0 && j==0)
            {
                cout<<x<<' ';
            }
            else if(i==1 && j==1)
            {
                cout<<y<<' ';
            }
            else if(i==2 && j==2)
            {
                cout<<z<<' ';

            }
            else {
            cout<<square[i][j]<<' ';
            }
        }
        cout<<endl;
    }



}