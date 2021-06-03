#include<bits/stdc++.h>
using namespace std;
int main (){
long long int a,b,c,d,e,f,g;
cin>>a>>b>>c;
d=2*a+2*b;
e=2*a+2*c;
f=2*c+2*b;
g=a+b+c;
if((d<e) && (d<f) && (d<=g))
        cout<<d<<endl;
    else if((e<d) && (e<f) && (e<g))
        cout<<e<<endl;
    else if((f<e) && (f<d) && (f<g))
        cout<<f<<endl;
    else if((g<e) && (g<f) && (g<d))
        cout<<g<<endl;







return 0;

}