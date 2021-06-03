#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double x0,y0;
    int ct=0;
    bool flag=false;
    double x,y,x1,y1,x2,y2;
    cin>>n>>x0>>y0;
    vector<pair<double,double>> point;
    set<double>tangent;
    double t;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        point.push_back(make_pair(x,y));


    }
    int p=0;

    for(int i=0;i<n;i++)
    {
       if(point[i].first-x0==0)
       {
           flag=true;
       }
       else{
        t=((point[i].second-y0)/(point[i].first-x0));
        //cout<<t<<endl;
        tangent.insert(t);
       }
    }
    if(tangent.size()==0)
    {
        cout<<1<<endl;
        return 0;
    }
    else if(tangent.size()!=0 && flag==true)
        cout<<tangent.size()+1<<endl;
    else
    {
        cout<<tangent.size()<<endl;
    }



}