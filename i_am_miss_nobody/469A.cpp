#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,m,p,q;
    set<int>n;
    cin>>m;
    cin>>x;
    for(int i=0;i<x;i++)
    {
      cin>>p;
      n.insert(p);
    }
    cin>>y;
    for(int i=0;i<y;i++)
    {
        cin>>q;
        n.insert(q);
    }
      if(n.size()==m)
            cout<<"I become the guy."<<endl;
            else
            cout<<"Oh, my keyboard!"<<endl;


}