#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x;
    cin>>n;
    vector<int>first,second;
    bool last=true;
    long long int sum1=0,sum2=0;
    for(int i=0; i<n; i++)
    {

        cin>>x;
        if(x>0)
        {
            first.push_back(x);
            sum1+=x;
            last=false;

        }
        else if(x<0)
        {
            x=x*(-1);
            second.push_back(x);
            sum2+=x;
            last=true;
        }
    }

    if(sum1>sum2)
    {
        cout<<"first"<<endl;
        return 0;
    }

    else if(sum1<sum2)
    {
        cout<<"second"<<endl;
        return 0;
    }

    else if(sum1==sum2)
    {
        if(first>second)
        {
            cout<<"first"<<endl;
            return 0;
        }

        else if(first<second)
        {
            cout<<"second"<<endl;
            return 0;
        }

        else if(last==true)
        {
            cout<<"second"<<endl;
            return 0;
        }
        else if(last==false)
        {
            cout<<"first"<<endl;
            return 0;
        }


    }





}