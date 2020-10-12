#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k;
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int low=1,high=1e10;
cin>>n>>k;
        int m;
        while(low<high)
        {
            int mid=low+(high-low)/2;
            if((mid-(mid/n))>=k)
            {
                if(mid%n!=0)
                {
                    m=mid;
                }
                high=mid;
            }
            else
                low=mid+1;
        }
        cout<<m<<endl;
    }



}