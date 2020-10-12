#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t,i,num,count;
 queue<int>q;
 cin>>t;
 for(int j=0;j<t;j++)
 {



 int remainder=0;
 count=0;
 cin>>num;
int size = trunc(log10(num)) + 1;
 for(int i=0;i<size;i++){
    remainder=num%10;
    num=num/10;
    if(i==0 && remainder>0){

       q.push(remainder*1);
       count++;
    }
    else if(i==1 && remainder>0){

         q.push(remainder*10);
         count++;
    }
    else if(i==2 && remainder>0){

        q.push(remainder*100);
        count++;
    }
    else if(i==3 &&  remainder>0){

             q.push(remainder*1000);
             count++;
    }
    else if(i==4 && remainder>0){
                //cout<<remainder*10000<<' ';
                 q.push(remainder*10000);
                 count++;
    }


 }
 cout<<count<<endl;
 while(!q.empty())
 {
     int a=q.front();
     cout<<a<<' ';
     q.pop();
 }
 cout<<endl;

 }
 //

}