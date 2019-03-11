#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{int a;
    cout<<"enter the no of test cases";
cin>>a;
while(a--)
{int count=0;
    string str;
string vowel="AEIOUaeiou";
    cin>>str;
    int len=str.length();
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<vowel.length();j++)
        {
            if(str[i]==vowel[j])
                count+=1;
        }
    }
    cout<<count<<endl;
}

return 0;}
