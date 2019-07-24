#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int Lsearch(int a[],int x,int n)
{
  int ind =-1;
  for (int i=0;i<n;i++)
  {
    if(a[i]==x)
    {
      ind=i;
      return ind;
    }
    else
    continue;
 }
  return ind;
}
int main(int argc, char const *argv[]) {

  /* code */
  int n,x;
  std::cout << "Enter no of elements u want to Enter" << '\n';
  cin>>n;
  int a[n];

  for (int i=0;i<n;i++)
  {cin>>a[i];
  }
  std::cout << "enter the no to be searched" << '\n';
  cin>>x;

  int ind=Lsearch(a,x,n);
  if(ind==-1)
  {
    cout<<"Element not found";
  }
  else
  {
    cout<<"Elemenet "<<x<<" is found at index --->"<<(ind+1);
  }

  return 0;
}
