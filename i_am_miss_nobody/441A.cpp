#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n,v,k,b=0,i,j,arr[55],ans[55];
    cin>>n>>v;
    for(i=1; i<=n; i++)
    {
        cin>>k;
        for(j=0; j<k; j++)
            cin>>arr[j];
        sort(arr,arr+k);
        if(arr[0]<v)
        {
            ans[b]=i;
            b++;
        }
    }
    cout<<b<<endl;
    for(i=0; i<b; i++)
        cout<<ans[i]<<" ";
}