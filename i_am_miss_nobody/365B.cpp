#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,len=0,ans=0;
    cin>>n;
    int a[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(i>=2)
        {
            if(a[i]==a[i-1]+a[i-2])
            {
                len++;
                if(len>ans)
                {
                    ans=len;
                }
            }

            else
            {
                len=0;
            }



        }


    }

    if(n<2)
    {
        cout<<n<<endl;
    }
    else
    {
        cout<<ans+2<<endl;
    }



}