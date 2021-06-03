#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,wide;
    cin>>n;
    pair<int,int>row[200006];
    stack<int>pass;
    //cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>wide;
        row[i]=make_pair(wide,i);
    }
    sort(row,row+n);
    string a;
    cin>>a;
    int m=0;
    for(int i=0; i<a.length(); i++)
    {
        if(a[i]=='0')
        {
          cout<<row[m].second+1<<' ';
          pass.push(row[m].second);
          m++;
        }
        else if(a[i]=='1')
        {
         cout<<pass.top()+1<<' ';
         pass.pop();
        }
    }

}