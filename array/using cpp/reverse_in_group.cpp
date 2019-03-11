#include <iostream>
#include <bits/c++.h>
#define F first
#define S second
int main(int argc, char const *argv[])
{int n;
	cin>>n;
	while(n--)
	{int size,k,;
		cin>>size>>k;
		int a[size];
		for (int i = 0; i < size; ++i)
		{
			cin>>a[i];
		}
		for (int i=0;j<size;i=i+k)
		{int left=i;

			int right=min(i+k-1,size-1);
			
			while(left<right)
			{
				swap(a[left++,right--]);
			}
			for (int i = 0; i < size; ++i)
			{
				cout<<a[i]<<" ";
			}
		}