#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a[100],j=0,k=0;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<n; i++){
        if((a[i]%2)==0)
            j++;
        else
            k++;
    }
    if(j<k)
        for(i=0; i<n; i++)
        {
            if((a[i]%2)==0)
            {
                cout<<i+1;
                break;
            }

        }
    if(j>k)
        for(i=0; i<n; i++)
        {
            if((a[i]%2)!=0)
            {
                cout<<i+1;
                break;
            }
        }

}