#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{int t;
	cin>>t;
	while(t--)
		{int size,k=1,l=0,ans=1,plat=1;
			cin>>size;
			int a[size],b[size];
			for(int i=0;i<size;i++)
			{
				cin>>a[i];
			}
			for(int j=0;j<size;j++)
			{	
				cin>>b[j];
				if(a[j]>b[j])
				{b[j]+=2400;

				}}
				sort(a,a+size);
				sort(b,b+size);
			}
			while(k<size && l<size)
			{
				if(a[k]<b[l])
				{	plat++;
					k++;
					ans=max(ans,plat);


				}
				else
				{
					plat--;
					l++;
				}
			}
			cout<<ans;
		}

	return 0;
}