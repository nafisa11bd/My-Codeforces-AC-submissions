#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {

        int n;
        cin>>n;
        int p=0,q=0;
        while(n!=1)
        {
            if(n%6!=0)
            {
                n*=2;
                p++;
                q++;
            }
            else{
                n/=6;
                p++;
                q--;


            }
            if(q>3){
                    p=-1;
                break;
            }

        }
        cout<<p<<endl;
    }



}