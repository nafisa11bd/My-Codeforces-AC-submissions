#include<bits/stdc++.h>
using namespace std;
int main()
{
 int  arr[100000];
int i,j,n;
cin>>n;
for(i=0;i<n;i++){
    cin>>arr[i];
}
    sort(arr,arr+n);
    cout<<min(arr[n-1]-arr[1],arr[n-2]-arr[0]);



}