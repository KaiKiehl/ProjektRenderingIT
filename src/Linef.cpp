#include "Linef.h"



Geometryf::Linef::Linef()
{
}

Geometryf::Linef::Linef(Geometryf::Pointf p0_, Geometryf::Pointf p1_) : p0(p0_), p1(p1_)
{
}


Geometryf::Linef::~Linef()
{
}

float Geometryf::Linef::Length()
{
	Geometryf::vectorfND deltaDim = p0.location - p1.location;
	deltaDim = deltaDim.abs();

	return deltaDim.mag();
}


	Geometryf::Pointf Geometryf::Linef::Getp0(void)
	{
		Geometryf::Pointf p0_ = p0;
		return p0_;
	}
	void Geometryf::Linef::Setp0(Pointf p)
	{
		p0 = p;
	}
	Geometryf::Pointf Geometryf::Linef::Getp1(void)
	{
	Geometryf::Pointf p1_ = p1;
		return p1_;
	}
	void Geometryf::Linef::Setp1(Pointf p)
	{
		p1 = p;
	}
