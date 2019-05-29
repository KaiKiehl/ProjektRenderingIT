#include "Linef.h"



Linef::Linef()
{
}

Linef::Linef(Pointf p0_, Pointf p1_) : p0(p0_), p1(p1_)
{
}


Linef::~Linef()
{
}

float Linef::GetLength()
{
	vectorfND deltaDim = p0.location - p1.location;
	deltaDim = deltaDim.abs();

	return deltaDim.mag();
}

