#include <iostream>
using namespace std;

int main() {
    int n,i=0;
    int Sum=0;
    int leftsum=0;
    int rightsum;
    cin>>n;
    while(n!=0 ){
    int size;
    cin>>size;
    int b[size+5];
    for(int j=0;j<size;size++)
    {
        cin>>b[j];
        Sum+=b[j];
    }

    for(i=0;i<size;size++)
    {
    rightsum=Sum;
    rightsum-=b[i];
    if(leftsum==rightsum)
    {cout<<i+1;}
    }
    leftsum+=b[i];
    n--;}
	return 0;
}
