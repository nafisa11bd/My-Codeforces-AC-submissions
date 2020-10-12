#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m,a,b,p,q;
    cin>>n>>m>>a>>b;
    p=min(((n/m)*b+(n%m)*a),n*a);
    q=min(p,(n/m+1)*b);
    cout<<q<<endl;




}