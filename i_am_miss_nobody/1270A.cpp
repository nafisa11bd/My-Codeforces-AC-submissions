#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int fp[100],sp[100],fpm=0,spm=0;
    int t,k1,k2;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        scanf("%d %d %d",&n,&k1, &k2);
       // cin>>n>>k1>>k2;
        for(int j=0; j<k1; j++)
        {
            scanf("%d",&fp[j]);
            //cin>>fp[j];
        }
        for(int j=0; j<k2; j++)
        {
            scanf("%d",&sp[j]);
            //cin>>sp[j];
        }
         sort(fp,fp+k1);
            sort(sp,sp+k2);
            fpm=fp[k1-1];
            spm=sp[k2-1];
        for(int p=0; p<n-1; p++)
        {


            if(fpm<spm)
            {
                sp[k2]=fp[k1-1];
                k1--;
                k2++;
                fpm=fp[k1-1];
            }

            else if(fpm>spm)
            {
                fp[k1]=sp[k2-1];
                k1++;
                k2--;
                spm=sp[k2-1];
            }

            if(k1==0)
            {
                printf("NO\n");

                //cout<<"NO"<<endl;
                break;
            }
            else if(k2==0)
            {
                printf("YES\n");
                //cout<<"YES"<<endl;
                break;
            }
        }
    }
}