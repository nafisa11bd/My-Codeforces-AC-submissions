#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,a[51][51];
    set<int>r,c;

    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>m;
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<m;k++)
            {
                cin>>a[j][k];
                if(a[j][k]==1)
                {
                    r.insert(j);
                    c.insert(k);
                }
            }
        }

        int ans=min(n-r.size(),m-c.size());
        if(ans%2)
            cout<<"Ashish"<<endl;
        else
            cout<<"Vivek"<<endl;

    r.clear();
    c.clear();




    }




}