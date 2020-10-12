#include<bits/stdc++.h>
using namespace std;

int countletters(string m)
{
    unordered_map<char,int>mpp;
    for(int i=0;i<m.length();i++)
    {
        mpp[m[i]]++;
    }
    return mpp.size();
}
int main()

{

    string s;
    string a="";
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(((s[i]>='a') && (s[i]<='z'))|| ((s[i]>='A')&&(s[i]<='Z')))
            a=a+s[i];
    }
    cout<<countletters(a)<<endl;


}