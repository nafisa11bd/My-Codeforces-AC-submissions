#include<bits/stdc++.h>
using namespace std;

long long int p=0;
string m;
int main()
{

    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>m;
       for(int j = 0; j < m.length(); j++) {
        if(m[j] != ' ')
            p++;
    }

        cout<<p<<endl;
        p=0;
    }




}