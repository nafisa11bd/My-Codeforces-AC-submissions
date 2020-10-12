#include<bits/stdc++.h>

using namespace std;
int a[1000000];
int main()

{
    int n,p,i=0;
    cin>>n;
    if(n==0){
        a[i]=n;
        i++;
    }
    else{
    while(n!=0)
    {

        p=n%10;
        a[i]=p;
        n=n/10;
        i++;

    }
    }

    for(int j=0; j<i; j++)
    {
        if(a[j]==0)
            cout<<"O-|-OOOO"<<endl;
        else if(a[j]==1)
            cout<<"O-|O-OOO"<<endl;
        else if(a[j]==2)
            cout<<"O-|OO-OO"<<endl;
        else if(a[j]==3)
            cout<<"O-|OOO-O"<<endl;
        else if(a[j]==4)
            cout<<"O-|OOOO-"<<endl;
        else if(a[j]==5)
            cout<<"-O|-OOOO"<<endl;
        else if(a[j]==6)
            cout<<"-O|O-OOO"<<endl;
        else if(a[j]==7)
            cout<<"-O|OO-OO"<<endl;
        else if(a[j]==8)
            cout<<"-O|OOO-O"<<endl;
        else if(a[j]==9)
            cout<<"-O|OOOO-"<<endl;

    }



}