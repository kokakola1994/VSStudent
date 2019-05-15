#pragma once
#include <iostream>
#include <string>

using namespace std;
class KartaCzytelnika
{
private:
	string iin;
	string adres;
	int numer;
	int data;
public:
	KartaCzytelnika	(int nnumer = 100, int ndata = 2000, string iin = "", string nadres = "");
	~KartaCzytelnika();
	void Setnumer(int numer) { this->numer = numer; };
	int Getnumer()const { return numer; };
	void Setdata(int data) { this->data = data; };
	int Getdata()const { return data; };
	void Setadres(string adres) { this->adres = adres; };
	string Getadres()const { return adres; };
	void Setiin(string iin) { this->iin = iin; };
	string Getiin() const { return iin; };
	void Printczytelnik();
	void InputCzytelnik();
};