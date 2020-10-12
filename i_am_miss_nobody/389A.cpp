#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,a[1001],m=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    m=a[0];

    for(int i=1; i<n; i++)
    {
        while(a[i]>m)
        {
            a[i]=a[i]-m;
        }

        sort(a,a+n);
        m=a[0];

    }
    //  sort(a,a+n);
    m=a[0];
//    if(m<a[1])
//    {
    while(a[1]>m)
    {
        a[1]=a[1]-m;
        if(a[0]>a[1])
            a[0]=a[0]-a[1];
    }

    sort(a,a+n);
    m=a[0];



cout<<m*n<<endl;

}