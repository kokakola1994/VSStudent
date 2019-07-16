#pragma once
#include <string>
#include <iostream>

using namespace std;
class People
{
private:
	string userlogin;
	string password;
public:
	string Name = "name";
	string SurName = "surname";
	string data = "99,99,9999";
	int ID = 0000;
	void print() 
	{
		cout << Name << endl << SurName << endl << data << endl << ID << endl;
	};
	string Setuserlogin(string Name,string SurName) 
	{
		userlogin = Name + SurName;
		return userlogin;
	};
	void trueuserlogin() 
	{
		string userlogin1;
		cout << "You login: " << endl;
		cin >> userlogin1;
		if (userlogin1 != userlogin)
		{
			cout << ("invalid userlogin");
			
		}
		else
		{
			cout << "Password: " << endl;
		}
	};
	string Setpassword()
	{
		string user = "user";
		string s = to_string(ID);
		password = user + s;
		return password;
	}
	void trueuserpassword()
	{
		string userpassword1;
		cin >> userpassword1;
		if (userpassword1 != password)
		{
			cout << ("invalid password");
		}
		else
		{
			cout << endl;
		}
	}
};

