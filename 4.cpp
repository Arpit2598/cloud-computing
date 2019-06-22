#include<iostream>
#include<string>
#include<algorithm>
#include<stdlib.h>
//substrings of a string
using namespace std;

int main(int argc, char const *argv[])
{
	string str,temp,str2;
	int i,j,k,flag;
	cin>>str;
	int len=str.length();
	for(i=0;i<len;i++)
	{
		for(j=i;j<len;j++)
		{
			flag=0;
			temp=str.substr(i,j);
			str2=temp;
			sort(temp.begin(), temp.end());
			for(k=0;k<temp.length();k++)
			{
				if(temp[k]==temp[k+1])
				{
					flag=1;
					break;
				}
			}
			if(flag!=1)
			{
			cout<<str2<<endl;
			}
		}
		
	}
	return 0;
}