#include "pch.h"
#include "Circle_Storable.h"


int Circle_Storable::Read()
{
	if (!is.is_open())
		return 0;
	is >> cx >> cy >> radius;

}
int Circle_Storable::Write()
{
	if (!os.is_open())
		return 0;
	os << cx << " " << cy << " " << radius;
	return 1;
}
