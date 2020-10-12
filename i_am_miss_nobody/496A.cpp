#include <bits/stdc++.h>
using namespace std;

int n,a[101],mx,mn=INT_MAX;

int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=1; i<n; i++)
        mx=max(mx,a[i]-a[i-1]);
    for(int i=1; i<n-1; i++)
        mn=min(mn,a[i+1]-a[i-1]);
    cout<<max(mx,mn);
}