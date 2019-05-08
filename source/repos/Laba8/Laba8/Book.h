#pragma once
#include <iostream>
#include <string>
using namespace std;
class Book
{
private:
	string title;
	string author;
	int code;
	int year;
public:
	Book(int ncode = 100, int nyear = 2000, string ntitle = "", string nauthor="");
	~Book();
	void Setcode(int code) { this->code = code; };
	int Getcode()const { return code; };
	void Setyear(int year) { this->year = year; };
	int Getyear()const { return year; };
	void Setauthor(string author) { this->author = author; };
	string Getauthor()const { return author; };
	void Settitle(string title) { this->title = title; };  
	string Gettitle() const { return title; };
	void Printbook();
	void Inputbook();
};

