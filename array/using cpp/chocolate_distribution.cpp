#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,k;
		cin >> n;
		int a[n];
		int mn = INT_MAX;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		cin >> k;
		sort(a,a+n);
		for(int i=0;i<n;i++)
		{
			if( (i+k-1 ) < n && (a[i+k-1] - a[i]) < mn )
				mn = a[i+k-1] - a[i];

		}
		cout << mn << endl;
	}
}