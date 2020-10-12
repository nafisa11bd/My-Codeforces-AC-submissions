#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    set<int>p;
    set<int>q;
    cin>>n;
    char a[n+10][n+10];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            if(i==j)
            {
                p.insert(a[i][j]);
                //cout<<"left"<<' ';
                //cout<<a[i][j]<<endl;
            }
            else if(i==n-j-1){
                p.insert(a[i][j]);
                //cout<<"right"<<' ';
                //cout<<a[i][j]<<endl;
            }

            else
                q.insert(a[i][j]);
        }
    }

    auto itr1=p.begin();
    auto itr2=q.begin();
    if(p.size()==1 && q.size()==1 &&( *itr1!=*itr2))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    //cout<<p.size()<<' '<<q.size()<<endl;



}