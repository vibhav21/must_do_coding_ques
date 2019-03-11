#include<iostream>
#include<bits/stdc++.h>
#define F first
#define S second
using namespace std;
int main()
{int t,ans=0,;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n],sum[n],sum1=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum1+=a[i];
			sum[i]=sum1;
		}

		for(int j=k;j<n;j++)
		{int sum2=sum[j]-sum[j-k];
			ans=max(sum2,ans);

		}
	cout<<ans;
	}
return 0;}	