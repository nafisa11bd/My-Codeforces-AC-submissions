#include<iostream>
using namespace std;
int main()
{

int i,n,count=0;
cin>>n;
for(i=0;i<n;i++){
    char a[200];
cin>>a;

if(a[0]=='T')
count=count+4;

else if(a[0]=='C')
count=count+6;
else if (a[0]=='O')
count=count+8;
else if(a[0]=='D')
count=count+12;
else if(a[0]=='I')
count=count+20;
}


cout<<count<<endl;
}