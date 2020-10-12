#include<bits/stdc++.h>
using namespace std;
int main(){
int A,B,C,N,R;
cin>>A>>B>>C>>N;
if((A+B-C)>=N){
    cout<<-1<<endl;
}
else if (C>A||C>B)
    cout<<-1;

else
    cout<<N-(A+B-C);







}