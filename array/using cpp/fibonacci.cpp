/*recursive solutioln of fibomnacci no
#include <iostream>
using namespace std;
int fibonacci(int n)
{
	if(n<=1)
	{return n;

	}
	else
		return fibonacci(n-2)+fibonacci(n-1);
}
int main()
{int n;
cout<<"no till you want to find sum of fibonacci no";
cin>>n;
cout<<fibonacci(n);
return 0;
}*/
/*meosization technique*/
/*#include<iostream>
using namespace std;
int lookup[100];
void initialize()
{
for(int i=0;i<100;i++)
{
    lookup[i]=-1;
}
}
int fibonacci(int n)
{
    if(lookup[n]==-1)
      { if(n<=1)
      {lookup[n]=n;
      }
      else
        {lookup[n]=fibonacci(n-2)+fibonacci(n-1);}
      }
return lookup[n];
}
int main()
{
    int n;
    cin>>n;
    initialize();
    cout<<fibonacci(n)<<endl;
    for(int j=0;j<n;j++)
        cout<<lookup[j]<<endl;
    return 0;
}*/


 /*tabulation for fibonacci
*/
#include<iostream>
using namespace std;
int fibonacci(int n)
{
    int f[n+1];
    f[0]=0;
    f[1]=1;
    for (int j=2;j<=n;j++)
        {f[j]=f[j-2]+f[j-1];

        }

        return f[n];
    }
int main(void)
{int n;
cout<<"enter the pos u want 2 search";
cin>>n;
cout<<fibonacci(n);
return 0;

}
