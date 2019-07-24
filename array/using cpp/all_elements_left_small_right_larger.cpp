

/* find the first index at which all the preceding elemnts are smaller and all succeeiding elements of array are larger  */
#include<bits/stdc++.h>
using namespace std;
//int NincNdec(int [],int )
int main() {
	int t;
	cin>>t;
	while(t--)
	{   int flag=0;
	    int size;
	    cin>>size;
	    int left[size];
	    int right[size];
	    int a[size];
	    left[0]=a[0];
	    right[size-1]=a[size-1];
	    for (int k=0;k<size;k++)
	    {
	        cin>>a[k];
	    }
	    for (int k=1;k<size;k++)
	    {
	        left[k]=max(left[k],a[k-1]);
	    }
	    for (int k=size-2;k>=0;k--)
	    {
	        right[k]=min(right[k],a[k+1]);
	    }
	    for(int i=1;i<=size-2;i++)
	    {
	        if(a[i]>=left[i && a[i]<=right[i]])
	        {
	            cout<<a[i]<<endl;
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0)
	    {
	        cout<<"-1"<<endl;
	    }}
	    return 0;
}
	    
	    