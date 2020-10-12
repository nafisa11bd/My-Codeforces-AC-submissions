#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,drink[100];
    float pc=0,dc;
    cin>>n;
    //cout<<pc/100<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>drink[i];
        pc=pc+float(drink[i]/100.000000);
//cout<<pc<<endl;
dc=float((pc/n)*100.0);
    }
    cout<<fixed<<setprecision(12)<<dc<<endl;
}