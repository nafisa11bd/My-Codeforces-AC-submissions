#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    string a;
    map<string,int>sub_freq;
    map<string,string>str_file;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;

        for(int j=0; j<a.length(); j++)
        {
            string m="";
            for(int k=j; k<a.length(); k++)
            {
                m.push_back(a[k]);
                if(str_file[m]!=a)
                    sub_freq[m]++;
                str_file[m]=a;


            }

        }
    }

    int q;
    cin>>q;

    for(int i=0; i<q; i++)
    {
        string substrr;
        cin>>substrr;
        if(sub_freq.find(substrr)==sub_freq.end())
        {
            cout<<0<<" "<<'-'<<endl;
        }
        else
        {
            cout<<sub_freq[substrr]<<" "<<str_file[substrr]<<endl;
        }
    }




}