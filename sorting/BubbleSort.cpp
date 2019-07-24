#include<bits/stdc++.h>
#include <iostream>
using namespace std;
void BubbleSort(int a[],int n)
{for (int i=0;i<n;i++)
    {
      for(int j=0;j<n-i;j++)
        {if(a[j]>a[j+1])
            {
              int temp;
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
            }

        }
    }

}
int main(int argc, char const *argv[]) {

  int n;
    std::cout << "enter no of elements" << '\n';
  cin>>n;
  int a[n];
  for (int i=0;i<n;i++)
    cin>>a[i];
BubbleSort(a,n);
cout<<"Array after sorting:"<<endl;
for (int i=0;i<n;i++)
std::cout << a[i] << ' ';

  return 0;
}
