#include<bits/stdc++.h>
using namespace std;
int main()
{

    string seq,ins;
    int n,m,step=1,flag=0;
    cin>>seq>>ins;
    n=seq.length();
    m=ins.length();

    for(int i=0;i<m;i++)
    {
        if(seq[flag]==ins[i])
        {
            step++;
            flag++;
        }
    }

    cout<<step<<endl;

}