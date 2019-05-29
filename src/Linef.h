#pragma once
#include "DrawableObjectf.h"
#include "Pointf.h"
class Linef :
	private DrawableObjectf
{
private: 
	Pointf p0, p1;
public:
	Linef();
	Linef(Pointf p0_, Pointf p1_);
	~Linef();
	float GetLength();
};

