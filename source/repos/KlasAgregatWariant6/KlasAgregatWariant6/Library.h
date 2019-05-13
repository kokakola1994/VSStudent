#pragma once
#include "KartaCzytelnika.h"
class Library
{
	static const unsigned N = 10;
	static unsigned n;
	KartaCzytelnika* f;
public:
	unsigned GetN()const { return n; };
	void Printall() const;
	void AddCzytelnik();

	void Sort(bool(*cmp)(KartaCzytelnika&, KartaCzytelnika&));
	KartaCzytelnika& operator[](const unsigned& index);
	const KartaCzytelnika& operator[](const unsigned& index) const;
	//	bool Find()const;
	bool Dell(unsigned);
	static bool Cmpnumer(KartaCzytelnika& a, KartaCzytelnika& b)
	{
		return a.Getnumer() < b.Getnumer();
	}
	static bool Cmpdata(KartaCzytelnika& a, KartaCzytelnika& b)
	{
		return a.Getdata() < b.Getdata();
	}
	static bool Cmpiin(KartaCzytelnika& a, KartaCzytelnika& b)
	{
		return a.Getiin() < b.Getiin();
	}
	static bool Cmpadres(KartaCzytelnika& a, KartaCzytelnika& b)
	{
		return a.Getadres() < b.Getadres();
	}
public:
	Library();
	~Library();
};

