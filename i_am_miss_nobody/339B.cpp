#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,cnt=0;
    cin>>n>>m;
   long long int a[m+1];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<m-1;i++)
    {
        if(i==0)
        {
            cnt+=(abs(a[i]-1));
            //cout<<"from 0"<<cnt<<endl;
        }

        if(a[i]<a[i+1]){
            cnt+=(abs(a[i]-a[i+1]));

        }

        else if(a[i]>a[i+1])
        {
            cnt+=(abs(a[i]-n));

            cnt+=(abs(1-a[i+1]));
cnt+=1;


        }

    }

    cout<<cnt<<endl;
}