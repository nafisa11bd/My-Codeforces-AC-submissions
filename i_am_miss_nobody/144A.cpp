#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1],mx=0,mn=INT_MAX,mxi,mni;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>mx)
        {
            mx=a[i];
            mxi=i;
        }
        if(a[i]<=mn)
        {
            mn=a[i];
            mni=i;
        }
    }
    if(mxi>mni)
        mni++;

    cout<<mxi+(n-1)-mni<<endl;
}