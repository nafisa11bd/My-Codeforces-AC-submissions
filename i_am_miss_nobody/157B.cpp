#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double add=0,pi=2*acos(0.0);
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++)
    {

        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    //cout<<a[0]<<' '<<a[1]<<' '<<a[2]<<endl;

    if(n%2==0)
    {
        for(int i=0;i<n-1;i++)
        {
            if(i%2==0){
            add+=pi*(a[i])*(a[i])-pi*(a[i+1])*(a[i+1]);
            }
        }
    }

    else if(n%2!=0)
    {
        for(int i=0;i<n-1;i++)
        {
            if(i%2==0){
            add+=pi*(a[i])*(a[i])-pi*(a[i+1])*(a[i+1]);
            }
        }
        add+=pi*a[n-1]*a[n-1];



    }

    cout<<fixed<<setprecision(10)<<add<<endl;
}