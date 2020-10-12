#include<bits/stdc++.h>
using namespace std;
char b[100];
int main()

{
    int n,m,ans=0;
    cin>>n>>m;
    char mark[n+10][m+10];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mark[i][j];
            if(mark[i][j]>b[j])
            {
                b[j]=mark[i][j];
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            if(mark[i][j]==b[j]){
                ans++;
                break;
            }
        }
    }

    cout<<ans<<endl;



}