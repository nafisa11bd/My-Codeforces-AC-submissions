#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,match;
    cin>>n;
    int a[n+1][2];
    map<int,int>home,away;
    for(int i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1];
        home[a[i][0]]++;

    }
   match=2*(n-1);
    for(int i=0;i<n;i++)
    {
        int home_dress=(n-1)+home[a[i][1]];
        int away_dress=match-home_dress;
        cout<<home_dress<<' '<<away_dress<<endl;
    }




}