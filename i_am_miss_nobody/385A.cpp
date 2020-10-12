#include<bits/stdc++.h>
using namespace std;
int main()
{

    int day,gift,m=0,n=0,p=0;
    int price[101];

    cin>>day>>gift;
    for(int i=0; i<day; i++)
    {
        cin>>price[i];
    }
    for(int i=0; i<day; i++)
    {
        if(price[i]>price[i+1] && i!=day-1)
        {
            m=price[i]-price[i+1];

            if(n<m)
                n=m;
        }

    }
    p=n-gift;
    if(p<0)
        cout<<0<<endl;
    else
        cout<<n-gift<<endl;
}