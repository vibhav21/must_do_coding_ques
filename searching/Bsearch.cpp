#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int Bsearch(int a[],int x,int n)
{

  int start=0;
  int end1=n;
  int mid=start+(end1-1)/2;
while(start<end1)
  {
    if(x==a[mid])
    {

      return mid;
    }
    else if (a[mid]<x)
    {
      start=mid+1;

    }
    else if (a[mid]>x)
    { end1=mid-1;

    }
  }
  return -1;
}
int main(int argc, char const *argv[]) {

  /* code */
  int n,x;
  std::cout << "Enter no of elements u want to Enter should be in ascending order" << '\n';
  cin>>n;
  int a[n];

  for (int i=0;i<n;i++)
  {cin>>a[i];
  }
  std::cout << "enter the no to be searched" << '\n';
  cin>>x;

  int ind=Bsearch(a,x,n);
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
