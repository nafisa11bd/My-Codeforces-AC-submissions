#include <bits/stdc++.h>
using namespace std;
int a[200][200];
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
        {
            char t;
            cin>>t;
            if(t=='o')
                a[i][j]=1;
        }
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            if((a[i][j+1]+a[i][j-1]+a[i+1][j]+a[i-1][j])%2)
            {
                cout<<"NO";
                return 0;
            }
    cout<<"YES";
    return 0;
}