#include <iostream>
#include <bits/c++.h>
#define F first
#define S second
int main(int argc, char const *argv[])
{int n;
	cin>>n;
	while(n--)
	{
		int size,Max=0,plat=0;
		cin>>size;
		int a[size],d[size];
		for(int i=0;i<size;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<size;i++)
		{
			cin>>d[i];
		}
		multimap<int,char> order;
		for(int j=0;j<size;j++)
		{
			order.insert(make_pair(a[i],'a'));
			order.insert(make_pair(d[i],'d'));
		}
		multimap<int,char>::iterator it=order.begin();
		while(it!=order.end())
			{
				if((*it).S=='a')
				{
					plat++;
					Max=max(Max,plat);
				}
				else
				{
					plat--;
				}
				it++;
			}
			cout<<Max;
	}

	return 0;

}
