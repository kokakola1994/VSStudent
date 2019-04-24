#pragma once
#include <fstream>
using namespace std;
class Storable
{
protected:
	ifstream is;
	ostream os;
public:
	enum{READ, WRITE};
	Storable(const char *f1, const char *f2);
	Storable(const char *f,int mode);
	virtual ~Storable();
	virtual int Read() = 0;
	virtual int Write() = 0;
}; 

