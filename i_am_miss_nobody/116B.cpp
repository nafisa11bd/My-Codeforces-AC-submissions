#include<bits/stdc++.h>
using namespace std;
int main()
{

    int row,col,ans=0;
    cin>>row>>col;
    char piwo[row+5][col+5];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>piwo[i][j];
        }
    }

     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(piwo[i][j]=='W')
            {
                bool flag=false;
                if(i!=row-1)
                {
                    if(piwo[i+1][j]=='P' && flag==false)
                    {

                        ans++;
                        piwo[i+1][j]='.';
                        flag=true;
                        continue;
                    }

                }
                if(i!=0)
                {
                    if(piwo[i-1][j]=='P' && flag==false)
                    {
                        ans++;
                        piwo[i-1][j]=='.';
                        flag=true;
                        continue;

                    }
                }
                if(j!=0)
                {
                   if(piwo[i][j-1]=='P' && flag==false)
                   {
                       ans++;
                       piwo[i][j-1]='.';
                       flag=true;
                       continue;

                   }
                }
                if(j!=col+1)
                {
                    if(piwo[i][j+1]=='P' && flag==false)
                    {
                        ans++;
                        piwo[i][j+1]='.';
                        flag=true;
                        continue;
                    }
                }

            }
        }
    }

    cout<<ans<<endl;


}