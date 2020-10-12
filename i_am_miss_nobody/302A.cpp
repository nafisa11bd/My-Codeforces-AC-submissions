#include<bits/stdc++.h>
using namespace std;
int main()

{
    long long int n,a[200005],m,p=0,pos=0,neg=0;
    int q[2];

    scanf("%lld %lld",&n,&m);
    for(int i=0;i<n;i++){

        cin>>a[i];
        if(a[i]==-1)
            neg++;
        else if(a[i]==1)
            pos++;
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<2;j++)
        {
            //cin>>q[j];
            scanf("%lld",&q[j]);
        }
        p=(q[1]-q[0])+1;
       // cout<<p<<endl;

        if(p==1)
            //cout<<0<<endl;
            printf("0\n");
        else if(p%2==0)
        {
            if(neg>=p/2 && pos >=p/2)
                //cout<<1<<endl;
                printf("1\n");
            else
                    //cout<<0<<endl;
                    printf("0\n");
        }
        else
            //cout<<0<<endl;
            printf("0\n");
    }





}