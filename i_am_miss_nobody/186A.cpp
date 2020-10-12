#include<bits/stdc++.h>
using namespace std;
int main()
{
    //string a,b;
    char a[100007],b[100007];
    int l=0,m=0;
    int s[100000],p=0;

   // cin>>a;
    scanf("%s", a);
    scanf("%s", b);
    //cin>>b;

    l=strlen(a);


    //cin>>b;


    m=strlen(b);
    if(l!=m)
    {
        //cout<<"NO"<<endl;
        printf("NO\n");
        return 0;
    }


    for(int i=0; i<l; i++)
    {
        if (a[i]!=b[i])
        {
            s[p]=i;
            p++;

        }
    }

    if(p==1 || p>2)
    {
        //cout<<"NO"<<endl;
         printf("NO\n");
        return 0;
    }

    else
    {
        swap(a[s[0]],a[s[1]]);
    }

    if(strcmp(a,b))
        //cout<<"YES"<<endl;
        printf("NO\n");
    else
       // cout<<"NO"<<endl;
       printf("YES\n");





}