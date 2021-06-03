#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ct=0;

    cin>>n;
    bool flag=true;

    while(n>1 && flag==true)
    {
        cout<<n<<' ';
        flag=false;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                flag=true;
                n=n/i;
               // cout<<"N"<<n<<endl;
                break;
            }


        }
    }

    cout<<1<<endl;



}