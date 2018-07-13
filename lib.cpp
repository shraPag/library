#include<iostream>
#include<string>
using namespace std;
int main()
{
	string user,pass;
	cout<<"Enter the username: "<<endl;
	cin>>user;
	cout<<"Enter the password"<<endl;
	login_user(user);
	login_pass(pass);
}
