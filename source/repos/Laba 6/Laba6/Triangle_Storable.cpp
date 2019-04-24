#include "pch.h"
#include "Triangle_Storable.h"


int Triangle_Storable::Read() {
	if (!is.is_open())
		return 0;
	is >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	return 1;
}
int Triangle_Storable::Write() {
	if (!os.is_open())
		return 0;
	os << x1 << " " << y1 << " " <<  x2 << " " << y2 << " " << x3 << " " << y3;
	return 1;
}
