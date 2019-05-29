#pragma once
#include "vectorfND.h"

 class DrawableObjectf
{
	
	/*
	Objekt in Welt
	*/

public:
	typedef unsigned int uint;
	vectorfND location, rotation, transform;
	DrawableObjectf();

	DrawableObjectf(vectorfND location_, vectorfND rotation_, vectorfND transform);

	~DrawableObjectf();
};

