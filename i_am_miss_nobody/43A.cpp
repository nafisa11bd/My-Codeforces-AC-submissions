#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int i,n , l=1,m=0;

string  a,b,c;

    cin>>n;
    cin>>a;
    for(i=1; i<n; i++)
    {
        cin>>c;
        if(c==a)
            l++;
        else
        {
            m++;
            b=c;
        }

    }
    if(l>m)
        cout<<a;
    else cout<<b;




}