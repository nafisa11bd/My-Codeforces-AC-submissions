#include<bits/stdc++.h>
using namespace std;
int main()

{

    int n,k,rw=0,cl=0;
    cin>>n>>k;
    int table[n+1][n+1];
    int row[n+1];
    int col[n+1];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(i==j){
            table[i][j]=k;
            cout<<table[i][j]<<' ';
           }
           else
           {
               table[i][j]=0;
               cout<<table[i][j]<<' ';
           }


        }
        cout<<endl;

    }




}