#include <iostream>
#include <string>

using namespace std;

string histring;

int main()
{
    int i = 0,j=0,k=0,l=0,m=0,n=0;

cin>>histring;
for(int q=0;q<histring.size();q++){
            if (std::string::npos != histring.find("Olya"))
                j++;
            if (std::string::npos != histring.find("Danil"))
                k++;
            if (std::string::npos != histring.find("Slava"))
                 l++;
            if (std::string::npos != histring.find("Ann"))
                 m++;
            if (std::string::npos != histring.find("Nikita"))
                  n++;

}

            if((j==1&&k==0&&l==0&&m==0&&n==0)||(j==0&&k==1&&l==0&&m==0&&n==0)||(j==0&&k==1&&l==0&&m==0&&n==0)||(j==0&&k==0&&l==1&&m==0&&n==0)||(j==0&&k==0&&l==0&&m==1&&n==0)||(j==0&&k==0&&l==0&&m==0&&n==1))
            cout<<"YES";
            else
                cout<<"NO";


}