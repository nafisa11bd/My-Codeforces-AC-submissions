#include<bits/stdc++.h>
using  namespace std;

int main()
{


    int s1,s2,s3,a,b,c;
    cin>>s1>>s2>>s3;

    a=round(sqrt((s1*s2)/s3));
    b=round(sqrt((s2*s3)/s1));
    c=round(sqrt((s3*s1)/s2));

    cout<<4*(a+b+c)<<endl;



}