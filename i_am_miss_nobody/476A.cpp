#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a;
    cin>>n>>m;

        if(n<m)
            a=-1;
        else
        {
            if(n%2==0)
                a=n/2;
            else
                a=(n/2)+1;
            while(a%m!=0)
            {
                a++;
            }
        }
        cout<<a<<endl;


}