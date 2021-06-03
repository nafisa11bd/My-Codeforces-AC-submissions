#include<bits/stdc++.h>
using namespace std;
long long int x;
long long int a;
long long int b;
long long int rest;

int main()
{

    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int root=0;

                 cin>>x;
        for(long long int a=1; a*a*a<x; a++)
        {
            rest=x-a*a*a;
            b=cbrt(rest);
            if(b*b*b==rest)
            {
                root=1;
                break;
            }



        }
        if(root==1)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;




    }


}