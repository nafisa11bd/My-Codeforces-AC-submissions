#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n,a,ct[1001];
    cin>>n;

    for(int i=0;i<1001;i++)
        ct[i]=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;

        ct[a]++;

        if(ct[a]>(n+1)/2)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;
}