#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>card;
    int play=1,point=0,ct=0;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        if(y!=0)
        {
           point+=x;
           play+=y-1;
        }
        else
            card.push_back(x);
    }

    sort(card.begin(),card.end(),greater<int>());

   for(int i=0;i<card.size();i++)
   {
       if(play>0)
       {
           point+=card[i];
           play--;
       }
       else
        break;

   }

    cout<<point<<endl;
}