#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int home[n+1],away[n+1],flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>home[i]>>away[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(home[i]==away[j])
                flag++;
        }
    }
    cout<<flag<<endl;

}