#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        string s;
        int p=0,balance=0;
        cin>>n>>s;
        for(int j=0;j<n;j++)
        {

            if(s[j]=='(')
            {
                balance++;
            }
            else{
                balance--;

            if(balance<0)
            {
                balance=0;
                p++;
            }
            }

        }
        cout<<p<<endl;



    }


}