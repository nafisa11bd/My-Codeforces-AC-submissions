#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,x,p=0,endtime=0;
    cin>>n>>x;
    int start[n+1],end[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>start[i]>>end[i];

    }
    for(int i=0;i<n;i++)
    {
         if (i==0)
        {
            if(x<start[i])
            {
                p+=(start[i]-1)/x;
                //cout<<"P from start"<<' '<<p<<endl;
            }

        }
         if (i<n-1)
        {
            //cout<<i<<endl;
            if(end[i]<start[i+1])
            {
                p+=(start[i+1]-(end[i]+1))/x;
                //cout<<"P porerta"<<' '<<p<<endl;
            }

        }

        else if (i==n-1)
            endtime=end[i];
    }
    cout<<abs(endtime-p*x)<<endl;


}