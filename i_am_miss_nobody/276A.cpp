#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,f,t,happiness=INT_MIN;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>f>>t;
        happiness=max(happiness,min(f,f-(t-k)));
    }
    cout<<happiness<<endl;
    return 0;
}