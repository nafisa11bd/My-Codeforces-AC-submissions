#include<iostream>
using namespace std;
int main()
{
    int c,d,i,sum;
    cin>>c>>d;
    if(c>d)
    {
        sum=c;
        for(i=0;i<sum;i++)
        {
            if(i%d==0)
                sum++;
        }
        cout<<sum-1;
    }
    else if(c==d)
    {
    cout<<c+1;
    }
    else
        cout<<c;
}