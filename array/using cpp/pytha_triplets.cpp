#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int pytha_triplet(int [],int);
	int n;
	cin>>n;
	while(n--)
	{int size;
	cin>>size;
	int a[size];
	for(int i=0;i<size;i++)
	{
	    cin>>a[i];
	    a[i]=a[i]*a[i];
	}
	int c=pytha_triplet(a,size);
	c==1?cout<<"Yes":cout<<"No";
	cout<<endl;
	}
	return 0;
}
int pytha_triplet(int a[],int size)
{
   /* for (int i=0;i<size;i++)
    {
        a[i]=(a[i]*a[i]);
    }*/
    sort(a,a+size);
    int l=0,r=size-1,flag=0;
    for (int j=size-1;j>=2;j--)
    {
        while(l<r)
        {
            if(a[l]+a[r]==a[j])
            {flag=1;
            break;}
        }
        
    }
    int b= (flag==1)?1:0;
    return b;
    
}
