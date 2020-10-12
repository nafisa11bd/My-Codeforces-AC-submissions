#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k,a[2005],eligible[20005],m=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(5-a[i]>=k)
        {


            m++;
        }

    }
    cout<<m/3<<endl;
}