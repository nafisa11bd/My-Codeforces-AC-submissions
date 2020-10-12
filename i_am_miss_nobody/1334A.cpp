#include<bits/stdc++.h>
using namespace std;
 vector<pair<int,int>>shama;
int main()
{
    int t,peek,a,b,flag=0;

    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>peek;
        for(int j=0;j<peek;j++)
        {
            cin>>a>>b;
           shama.push_back(make_pair(a,b));
        }
        for(int j=0;j<peek;j++)
        {
            if(j==0)
            {
                if(shama[j].first<shama[j].second)
                {
                    flag=1;
                }
            }
            else if(j>0)
            {
                if(shama[j].first<shama[j-1].first)
                {
                    flag=1;
                }

                else if(shama[j].second<shama[j-1].second)
                {
                    flag=1;
                }
                else if(shama[j].second>shama[j-1].second && shama[j].first<=shama[j-1].first)
                {
                    flag=1;
                }
            }
        }
        if(flag==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
            flag=0;
            shama.clear();


    }
}