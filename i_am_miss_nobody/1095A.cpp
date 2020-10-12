#include<bits/stdc++.h>
using namespace std;
int main(){
int sum=1;
int j,n;
string a;
cin>>n;
cin>>a;

for(j=0;j<n;j+=sum)
{

cout<<a[j];
sum++;
}



}