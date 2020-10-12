#include<bits/stdc++.h>
using namespace std;
int main()
{


    int n;
     cin>>n;
    int a[n+1];
    int b[n+1];
    int first=0,second=0,sfirst=0,send=0;


    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n-1; i++)
    {
        first=min(a[i],a[i+1]);
        second=max(a[i],a[i+1]);
        for(int j=i+1; j<n-1; j++)
        {
            sfirst=min(a[j],a[j+1]);
            send=max(a[j],a[j+1]);

            if((first<sfirst && second<send && sfirst<second)||(sfirst<first && send<second && first<send))
            {
                cout<<"yes"<<endl;
                return 0;
            }



        }

    }
    cout<<"no"<<endl;




}