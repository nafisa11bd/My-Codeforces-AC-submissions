#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,sum=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i*5;
        if(sum+k>240)
        {
            cout<<i-1<<endl;
            break;
        }

        else if((sum+k)==240)
        {
            cout<<i<<endl;
            break;

        }

        else if((sum+k)<240 && i==n)
        {
            cout<<i<<endl;
            break;
        }

    }
}