#include<iostream>
#include<bits/stdc++.h>
#define F first
#define S second
using namespace std;
int main()
{int t,ans=0,sum;
	cin>>t;
	while(t--)
	{int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int j=k;j<n;j=j+1)
			{sum=0;
				for(int l=j-k;l<j;l++)
				{
					sum+=a[l];

				}
				ans=max(ans,sum);
			}					
	cout<<ans;
	}
	return 0;
	}	