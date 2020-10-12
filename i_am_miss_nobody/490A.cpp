#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>student;
    int n,a,m=0,p=0,q=0,s=0;
    int first[5000],second[5000],third[5000];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        student.insert({i+1,a});
        if(a==1)
        {
            first[m]=i+1;
            m++;
        }
        else if(a==2)
        {
            second[p]=i+1;
            p++;
        }
        else if(a==3)
        {
            third[q]=i+1;
            q++;
        }
    }
//    for (auto itr = student.begin(); itr != student.end(); ++itr)
//    {
//
//
//
//        if(itr->second==1)
//        {
//            //cout<<itr->first<<endl;
//            first[m]=itr->first;
//            m++;
//
//        }
//
//        else if(itr->second==2)
//        {
//            second[p]=itr->first;
//            p++;
//        }
//
//        else if (itr->second==3)
//        {
//            third[q]=itr->first;
//            q++;
//        }
//
//
//
//}

    //cout<<first[0]<<' '<<second[0]<<' '<<third[0]<<' '<<first[1]<<" "<<second[1]<<" "<<third[1]<<endl;
   s=min(min(m,p),q);
    cout<<s<<endl;
   for(int i=0;i<s;i++){
       cout<<first[i]<<" "<<second[i]<<" "<<third[i]<<endl;
   }




}