#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            if(i%3==0)
            {
                cout<<"a";
            }
            else if(i%3==1)
            {
                cout<<"c";
            }
            else if(i%3==2)
            {
                cout<<"b";
            }
        }

        cout<<endl;
    }

}