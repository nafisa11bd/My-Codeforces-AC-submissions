#include<bits/stdc++.h>
using namespace std;
int main()
{

    int d,sumtime,maxx=0,minn=0,sum=0;
    cin>>d>>sumtime;
    vector<pair<int,int>>time;
    vector<int>tt;
    for(int i=0; i<d; i++)
    {
        int x,y;
        cin>>x>>y;
        time.push_back(make_pair(x,y));
        maxx+=time[i].second;
        tt.push_back(x);
        minn+=time[i].first;
    }

    if(maxx<sumtime)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    int p=0;

    while(minn<sumtime)
    {
        if(time[p].first+1>time[p].second)
        {
            p++;
        }
        else if(time[p].first+1<=time[p].second)
        {
            time[p].first+=1;
            minn++;
            p++;


        }

        if(p>=d)
            p=0;

        if(minn==sumtime || minn>sumtime)
            break;
    }

//    for(int i=0;i<d;i++)
//    {
//        if(minn<sumtime)
//        {
//            time[i].first+=1;
//            minn++;
//        }
//        if(minn==sumtime || minn>sumtime)
//        {
//            break;
//        }
//        if(minn<sumtime && i==d-1)
//        {
//            i=0;
//        }
//    }

    if(minn>sumtime)
    {
        cout<<"NO"<<endl;
        return 0;
    }

    cout<<"YES"<<endl;
    for(int i=0; i<d; i++)
    {
        cout<<time[i].first<<' ';
    }


}