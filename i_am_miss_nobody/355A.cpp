


#include<bits/stdc++.h>
using namespace std;
int main()
{

    int k,d,i;
    cin>>k>>d;

    if(d==0 && k!=1)
        cout<<"No solution"<<endl;

    else
    {
        cout<<d;
        for(int i=0; i<k-1; i++)
        {
            cout<<0;
        }
    }
    cout<<endl;


}