#include <bits/stdc++.h>


using namespace std;

int main()
{
	map<int, bool> vert, horz;
	int r, c;
	char b;
	cin >> r >> c;
	for (int i = 0; i < r; i++){
	for (int j = 0; j < c; j++)
	{
		cin >> b;
		if (b == 'S')
		{
			vert[i] = true;
			horz[j] = false;
		}
	}
	}
	cout << r*c - vert.size()*horz.size();
}