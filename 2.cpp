//pallindrome of a string
#include<iostream>
#include<string.h>


using namespace std;

int main(int argc, char const *argv[])
{
	char str[100];
	cin>>str;
	int len=strlen(str);
	int flag=0;
	for(int i=0;i<len/2;i++)
	{
		if(str[i]!=str[len-i-1])
			flag=1;
	}
	if(flag==1)
	{
		cout<<"NOT pallindrome";
	}
	else
	{
		cout<<"pallindrome";
	}
	return 0;
}