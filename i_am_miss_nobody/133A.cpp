#include<iostream>

#include<string>
using namespace std;
int main()
{
    int i;
    string input,output;
    while(cin>>input)
    {
        output="NO";
        for(i=0; i<input.length(); i++)
        {
            if(input[i]== 'H' || input[i]=='Q' || input[i]== '9' )
            {
                output="YES";
                break;
            }
        }
        cout<<output<<"\n";
    }
    return 0;


}