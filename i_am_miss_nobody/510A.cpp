#include <iostream>
using namespace std;
main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        if(i%4==0)cout<<"#";
        for(int j=1; j<m; j++)
        {
            (i%2==1)?cout<<"#":cout<<".";
        }
        if(i%4!=0)cout<<"#";
        cout<<endl;
    }
}