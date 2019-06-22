#include<iostream>
#include<string>
#include<stdlib.h>
//substrings of a string
using namespace std;

int main(int argc, char const *argv[])
{
	string str;
	int i,j,k;
	cin>>str;
	int len=str.length();
	for(i=0;i<len;i++)
	{
		for(j=i;j<len;j++)
		{
			for(k=i;k<=j;k++)
			{
				cout<<str[k];
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}