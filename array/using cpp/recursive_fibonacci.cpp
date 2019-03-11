/*recursive solutioln of fibomnacci no*/
#include <iostream>
using namespace std;
void fibonacci(int n)
{
	if(n==0||n==1)
	{return 1;

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
}