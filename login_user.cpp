#include<iostream>
#include<cstdlib>
using namespace std;
int main()
//void login_user(string u)
{
	string u="shra#^v77_yp@gmail.com";
	int len,a=NULL,mail=NULL;
	len=u.length();
		
	for(int i=0;i<len;i++)
	{
		if(u[i]=='@')
		a=i;
	}
	if(a==NULL)
	{
		cout<<"Invalid username"<<endl;
		exit(1);
	}
	
	
	if((u[0]>=32 && u[0]<=47)||(u[0]>=58 && u[0]<=64)||(u[0]>=91 && u[0]<=96)||(u[0]>=123 && u[0]<=126)||(u[0]>=48 && u[0]<=57))
	{
		cout<<"Invalid username"<<endl;
		exit(1);
	}
	
	for(int i=1;i<a;i++)
	{
		if(u[i]==95 || isalpha(u[i]) || isdigit(u[i]))
		continue;
		else
		{
			cout<<"Invalid username"<<endl;
			exit(1);
		}
		
		
	} 

	if(u[a+1]=='g' && u[a+2]=='m' && u[a+3]=='a' && u[a+4]=='i' && u[a+5]=='l')
	mail=a+5+1;
	else
	{
		cout<<"Invalid username"<<endl;
		exit(1);
	}
	
	if(u[mail]=='.' && u[mail+1]=='c' && (u[mail+2]=='o' || (u[mail+2]=='o' && u[mail+3]=='m')))
	cout<<"Valid username"<<endl;

	else
	{
		cout<<"Invalid username"<<endl;
		exit(1);
	}		
}
