#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<stdlib.h>
//substrings of a string
using namespace std;

int main(int argc, char const *argv[])
{
	string str,str2,temp,b;
	int i,j,k,mx=0;
	cin>>str;
	int len=str.length();
	for(i=0;i<len;i++)
	{
		for(j=1;j<len;j++)
		{
			temp=str.substr(i,j);
			str2=temp;
			reverse(temp.begin(),temp.end());
			if(str2.compare(temp)==0&& str2.length()!=1)
			{
				if(mx<str2.length())
				{
					mx=str2.length();
					b=str2;
				}
			}
		}
	}
	cout<<b;
	return 0;
}