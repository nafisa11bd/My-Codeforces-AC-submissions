#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,s,p=0,test,sample=0,temp=0;
    cin>>test;
    for(int i=0; i<test; i++)
    {
        cin>>a>>b>>n>>s;

        sample=n*a+b;
        if(sample==s)
            cout<<"YES"<<endl;
        else if (sample<s)
            cout<<"NO"<<endl;
        else if(sample>s)
        {

            p=n*a;

            if(p<s)
            {
                for(int k=0; k<b; k++)
                {
                    p++;
                    if(p==sample){
                        cout<<"YES"<<endl;
                        temp++;
                    }
                }
                if(temp==0)
                {
                    cout<<"NO"<<endl;
                }
            }
            else if(p>s) {
            for(int j=0; j<(p-a); j++)
            {

                p=p-n;
                sample=p+b;
                //cout<<p;
                if(sample==s)
                {
                    cout<<"YES"<<endl;
                    temp++;
                }
            }
            }
            if(temp==0)
                cout<<"NO"<<endl;
        }
        p=0;
        sample=0;
        temp=0;

    }

}