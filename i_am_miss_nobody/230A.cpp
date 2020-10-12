#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int>a[10001];
    int s,n;
    cin>>s>>n;
    for(int i=0;i<n;i++)
        cin>>a[i].first>>a[i].second;
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(s>a[i].first)
            s+=a[i].second;
        else if(s<=a[i].first)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;

}