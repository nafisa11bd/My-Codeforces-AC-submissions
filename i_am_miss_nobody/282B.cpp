#include<bits/stdc++.h>
using namespace std;
int main()
{

int n;
cin>>n;
int sa=0,sg=0;
string s;
bool flag=true;
for(int i=0;i<n;i++)
{
    int x,y;
    cin>>x>>y;
    if(abs(sa+x-sg)<=500)
    {
        s+='A';
        sa+=x;
    }
    else if(abs(sg+y-sa)<=500)
    {
        s+='G';
        sg+=y;
    }
    else
    {
        flag=false;
        break;
    }


}
if(flag==false)
{
    cout<<-1<<endl;
}
else
{
    cout<<s<<endl;
}

}