#include<bits/stdc++.h>
using namespace std;

int prime(int n)
{

    int p=0;

    for(int i=2; i<=sqrt(n); i++)
    {


        if ((n%i)==0)
        {

            p=1;
            break;
        }
    }
    if(p==0)
        return 1;
    else
        return 0;
}


int main()
{
    int m,n,flag=0;
    cin>>n>>m;
    for(int i=n+1; i<=m; i++)
    {

        if(prime(i))
        {

            if(i==m)
            {

                cout<<"YES"<<endl;
                flag++;
                break;
            }
            else
            {
                cout<<"NO"<<endl;
                flag++;
                break;
            }


        }
    }



    if(flag==0)
        cout<<"NO"<<endl;


}