#include <iostream>
using namespace std;

int main()
{
	int t, n, a;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		if (n % 2 != 0 && n != 1)
		{
			a = n / 2;
			cout << a << endl;
		}
		else if (n % 2 == 0 && n != 2)
		{
			a = n / 2;
			a = a - 1;
			cout << a << endl;
		}

		else if (n == 2)
		{
			cout << 0 << endl;
		}

		else if (n == 1)
		{
			cout << 0 << endl;
		}
	}
}