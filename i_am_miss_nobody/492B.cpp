#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,l;
    double d=0,f=0,g=0;

    cin>>n>>l;
    int p[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }

    sort(p,p+n);

    for(int i=0;i<n-1;i++)
    {
       if(abs(p[i]-p[i+1])>d)
       {
           d=abs(p[i]-p[i+1]);
       }
    }

    //cout<<(float)d/2<<endl;

   // if(p[0]!=0)
        f=p[0]-0;
    //if(p[n-1]!=l)
        g=l-p[n-1];
        //cout<<f<<" "<<g<<endl;

    cout<<std::fixed << std::setprecision(9)<<(double)max(d/2,max(f,g))<<endl;




}