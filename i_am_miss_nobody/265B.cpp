#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int tree[n+1];
    int ans;
    for(int i=0;i<n;i++)
    {
        cin>>tree[i];
    }

    ans=n+n-1+tree[0];

    for(int i=0;i<n-1;i++)
    {
        ans+=abs(tree[i]-tree[i+1]);
    }

    cout<<ans<<endl;
}