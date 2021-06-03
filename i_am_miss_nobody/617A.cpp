#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;

    int count= 0;
    cin>>n;

    count+= n/5;
    n %= 5;
    count+= n/4;
    n %= 4;
    count+= n/3;
    n %= 3;
    count+= n/2;
    n %= 2;
    count+= n/1;
    n %= 1;


    cout << count <<endl;
    return 0;
}