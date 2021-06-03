#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int j=0;
        int x;
        cin>>x;
        int jump=0;
        for(int k=1; k<=x; k++)
        {
            j+=k;
            jump=k;
            if(j>=x)
                break;


        }
        if(j==x+1)
            cout<<jump+1<<endl;
        else
            cout<<jump<<endl;


    }




}