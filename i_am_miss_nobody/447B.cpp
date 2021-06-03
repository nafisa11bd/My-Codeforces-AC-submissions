#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int n;

    int maxim=0;

    int p[27];
    cin>>a;
    cin>>n;

    for(int i=0; i<26; i++)
    {
        cin>>p[i];
        maxim=max(maxim,p[i]);


    }

    int ans=0;

    for(int i=0; i<a.length(); i++)
    {
        ans+=(i+1)*p[a[i]-'a'];

    }

    int val=a.length()+1;
    while(n--)
    {
        ans+=val*maxim;
        val++;
    }

    cout<<ans<<endl;





}