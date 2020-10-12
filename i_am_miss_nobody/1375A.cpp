#include<bits/stdc++.h>
using namespace std;
int main()
{


    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            if(i%2!=0)
                a[i]=abs(a[i])*(-1);
            else
                a[i]=abs(a[i]);
        }
        for(int i=1;i<=n;i++)
        {
            printf("%d ",a[i]);
        }
        cout<<endl;
    }
}