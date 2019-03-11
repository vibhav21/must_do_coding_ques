#include <iostream>
#include <algorithm>
#define MAX 100
using namespace std;
int temp[MAX];
int LIS(int b[],int size )
{int i,j,mx=0;
    for (i=1;i<size;i++)
    {
        for(j=0;j<i;j++)
            {
                if(b[j]<b[i])
                    {
                        temp[i]=max(temp[i],temp[j]+b[i]);
                    }
            }
    }
    for(int k=0;k<size;k++)
        {mx=max(mx,temp[k]);}
    return mx;
}


int main() {int a,size;
            int b[MAX];
    cin>>a;
    while(a!=0)
    {
        cin>>size;
        for(int j=0;j<size;j++)
            {cin>>b[j];

            }
        for(int i=0;i<size;i++)
            {
                temp[i]=b[i];
            }

        cout<<LIS(b,size)<<endl;

        a--;
    }


	return 0;
}
