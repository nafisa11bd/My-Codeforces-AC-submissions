#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c=0,p=0,t;

  cin>>t;
    for(int i=0;i<t;i++){
              cin>>a>>b;

              while(a!=b)
                {
                    if(a<b)
                        swap(a,b);
                 else if(a>b)
                 {
                     if(b*8<=a){
                        b=b*8;
                        c++;
                        if(a==b)
                            p=1;
                     }
                     else if(b*4<=a)
                     {
                        b=b*4;
                        c++;
                        if(a==b)
                            p=1;
                     }

                     else if(b*2<=a)
                     {
                         b=b*2;
                         c++;
                         if(a==b)
                            p=1;
                     }
                     else
                        break;

                 }

                 }
                 if(p==0 && a!=b)
                    cout<<-1<<endl;
                 else
                    cout<<c<<endl;
                 p=0;
                 c=0;



    }
}