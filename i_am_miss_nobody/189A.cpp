#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,a,b,c,ans=0;
    cin>>n>>a>>b>>c;
    for(int x=0;x<=4000;x++)
    {
        for(int y=0;y<=4000;y++)
        {
            int cz=n-(a*x+b*y);
            if(cz<0)
                break;
            double z=cz/(double)c;
            if(z== (int)z){
            ans=max(ans,(int)z+y+x);
            }

        }
    }
    cout<<ans<<endl;

}