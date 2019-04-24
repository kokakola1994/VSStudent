#include "pch.h"
#include "Storable.h"

Storable::Storable(const char *f1,const char *f2)
{
	is.open(f1, ios_base::in);
	if (!is.is_open())
		throw f1;
	os.open(f2, ios_base::out);
	if (!os.is_open())
		throw f2;
}


Storable::Storable(const char*f, int mode)
{
	if (mode == READ)
	{
		is.open(f, ios_base::in);
		if (!is.is_open())
			throw f;
	}
	else if (mode == WRITE)
	{
		os.open(f, ios_base::out);
		if (!os.is_open())
			throw f;
	}
	Storable::~Storable()
	{
		if (is.is_open())
			is.close();
		if (os.os_open())
			os.close();
	}
}
