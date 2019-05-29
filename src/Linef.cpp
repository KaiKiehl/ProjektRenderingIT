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


	Pointf Linef::Getp0(void)
	{
		Pointf p0_ = p0;
		return p0_;
	}
	void Linef::Setp0(Pointf p)
	{
		p0 = p;
	}
	Pointf Linef::Getp1(void)
	{
	Pointf p1_ = p1;
		return p1_;
	}
	void Linef::Setp1(Pointf p)
	{
		p1 = p;
	}
