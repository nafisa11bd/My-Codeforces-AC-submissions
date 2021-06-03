#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>nodes;
    vector<int>::iterator it;
    for(int i=1;i<=n;i++)
    {
        nodes.push_back(i);
    }
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        it=std::find(nodes.begin(),nodes.end(),x);
        if(it!=nodes.end())
        {
            nodes.erase(it);
        }

         it=std::find(nodes.begin(),nodes.end(),y);
        if(it!=nodes.end())
        {
            nodes.erase(it);
        }

    }

    it=nodes.begin();
   cout<<n-1<<endl;

   for(int i=1;i<=n;i++)
   {
       if(i!=*it)
       {
           cout<<*it<<' '<<i<<endl;
       }
   }
}