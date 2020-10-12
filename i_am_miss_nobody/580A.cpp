#include <iostream>
using namespace std;

int main()
{
    int n, l(1), ml(1);
    cin >> n;
    int p[n];

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        if (i > 0)
            if (p[i] >= p[i - 1])
            {
                l++;
                ml = max(ml, l);
            }
            else
                l = 1;
    }

    cout << ml << endl;
    return 0;
}