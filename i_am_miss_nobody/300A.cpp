#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>neg,pos,zero;


    int n,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a>0)
            pos.push_back(a);
        else if(a<0)
            neg.push_back(a);
        else if(a==0)
        zero.push_back(a);
    }

    if(neg.size()%2==0)
    {
        zero.push_back(neg.back());
        neg.pop_back();
    }

    if(pos.size()==0)
    {
        for(int i=0;i<2;i++)
        {
            pos.push_back(neg.back()),neg.pop_back();
        }
    }

    cout<<neg.size()<<' ';
    for(int i=0;i<neg.size();i++)
    {
        cout<<neg[i]<<' ';
    }
    cout<<endl;

    cout<<pos.size()<<' ';
    for(int i=0;i<pos.size();i++)
    {
        cout<<pos[i]<<' ';
    }
    cout<<endl;

     cout<<zero.size()<<' ';
    for(int i=0;i<zero.size();i++)
    {
        cout<<zero[i]<<' ';
    }
    cout<<endl;





}