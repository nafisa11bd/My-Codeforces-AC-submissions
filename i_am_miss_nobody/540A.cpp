#include <iostream>
#include<stdlib.h>

using namespace std;
long long n,sum;
string a,b;
int main()
{
cin>>n>>a>>b;
for(int i=0; i<n; i++)
{

sum+=min(abs(a[i]-b[i]),10-abs(a[i]-b[i]));


}
cout<<sum;
}