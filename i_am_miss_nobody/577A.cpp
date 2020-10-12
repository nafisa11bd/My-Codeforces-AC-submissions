#include <iostream>

using namespace std;

int main()
{
    int a, y;

    cin>>a>>y;
    int c= 0;
    if(y <= a) c++;

    for(int i= 2; i<= a; i++){
        if(y%i == 0 && y/i <= a){
            c++;
        }
    }

    cout<< c <<endl;

    return 0;
}