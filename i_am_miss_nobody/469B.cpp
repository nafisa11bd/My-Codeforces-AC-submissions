#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,q,l,r;
    cin>>p>>q>>l>>r;
    vector<pair<int,int>>lix,liz;

    for(int i=0; i<p; i++)
    {
        int x,y;
        cin>>x>>y;
        lix.push_back(make_pair(x,y));
    }

    for(int i=0; i<q; i++)
    {
        int x,y;
        cin>>x>>y;
        liz.push_back(make_pair(x,y));
    }
    int ans=0;

    for(int i=l; i<=r; i++)
    {
        bool flag=false;
        for(int j=0; j<p; j++)
        {
            for(int k=0; k<q; k++)
            {
                if(lix[j].first>=liz[k].first+i && lix[j].first<=liz[k].second+i)
                {
                    flag=true;
                }
                if(liz[k].first+i>=lix[j].first && liz[k].first+i<=lix[j].second)
                {
                    flag=true;
                }

            }

        }
        if(flag==true)
        {
            ans++;
        }
    }

    cout<<ans<<endl;
}