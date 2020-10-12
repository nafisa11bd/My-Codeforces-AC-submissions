#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,zero=0,five=0,ans=0;
    cin>>n;
    int a[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==0)
            zero++;
        else
            five++;
    }
    while(five!=0){

        if((five*5*10)%9==0)
        {
            ans=five;
            break;
        }
        else
            five--;

    }
    if(ans==0 && zero >0)
        cout<<0<<endl;
    else if (ans>0 && zero >0){
        for(int i=0;i<ans;i++)
            cout<<5;
        for(int i=0;i<zero;i++)
            cout<<0;
        cout<<endl;
    }
    else if(zero==0)
        cout<<-1<<endl;

}