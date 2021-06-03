#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;
int main(){
string a;
int x=0,t;
cin>>t;
while(t--)
{
cin>>a;
if(a[1]=='+')
++x;
else
--x;

}
cout<<x;
}