#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    pair<int,int>a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    sort(a,a+n);

    for(int i=0; i<n-1; i++)
    {
        if(a[i].first<a[i+1].first && a[i].second>a[i+1].second)
        {


            cout<<"Happy Alex"<<endl;
            return 0;
        }

    }
    cout<<"Poor Alex"<<endl;




}