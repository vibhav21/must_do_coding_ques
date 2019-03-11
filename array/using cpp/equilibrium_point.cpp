#include <iostream>
using namespace std;
int equilibrium_point(int a[],int s,int Sum)
    {   int leftsum=0,rightsum,flag=0;
        rightsum=Sum;
        for(int j=0;j,s;j++)
            {   rightsum-=a[j];
                if(leftsum==rightsum)
                    {
                        return j+1;
                        flag=1;
                        break;
                    }
                    leftsum+=a[j];

            }
    if(flag==0)
    return -1;
    }
int main() {
	int n,Sum=0;
	cin>>n;
	while(n!=0)
	{
	    int s;
	    cin>>s;
	    int a[s];
	    for (int i=0;i<s;i++)
	    {
	        cin>>a[i];
	        Sum+=a[i];
	    }
	    int f=equilibrium_point(a,s,Sum);
	    cout<<f;
	n--;}
	return 0;
}
