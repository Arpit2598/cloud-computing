#include<iostream>
#include<string>
#include<algorithm>
#include<stdlib.h>
//substrings of a string
using namespace std;

int main(int argc, char const *argv[])
{
	string str,temp,str2,max_str;
	int i,j,k,flag;
	getline(cin,str);
	int len=str.length();
	int max=0;
	for(i=0;i<len;i++)
	{
		for(j=i;j<=len;j++)
		{
			flag=0;
			temp=str.substr(i,j);
			str2=temp;
			sort(temp.begin(), temp.end());
			for(k=0;k<temp.length()-1;k++)
			{
				if(temp[k]==temp[k+1])
				{
					flag=1;
					break;
				}
			}
			if(flag!=1&& max<temp.length())
			{
				max=str2.length();
				max_str=str2;
			}
		}
		
	}
	cout<<max_str;
	return 0;
}