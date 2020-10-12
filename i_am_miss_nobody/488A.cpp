#include<bits/stdc++.h>
using namespace std;
int main()

{
    long long int a,n;
    long long int b[17];
    int ans;

    cin>>a;

    for(int i=1;i<=17;i++)
    {
        b[i]=a+i;
    }

    for(int i=1;i<=17;i++)
    {
        while(b[i]!=0)
        {
            n=b[i]%10;
            //cout<<n<<endl;
            if(n==8 || n==-8)
            {
                ans=i;
                cout<<ans<<endl;
                return 0;
            }

            b[i]=b[i]/10;

        }
    }







}