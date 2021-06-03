#include <cstdio>
#include <iostream>

using namespace std;

int main ()
{
    int n;
    int m;
    int a;

    scanf ("%d %d %d", &n, &m, &a);

    long long fl = n / a;

    if (n % a) fl++;

    long long fc = m / a;

    if (m % a) fc++;

    cout << fl * fc << endl;

    return 0;
}