#pragma once
#include "vectorfND.h"
namespace Geometryf
{
 class DrawableObjectf
{

	/*
	Objekt in Welt
	*/

public:
	typedef unsigned int uint;
	Geometryf::vectorfND location, rotation, transform;
	DrawableObjectf();

	DrawableObjectf(Geometryf::vectorfND location_, Geometryf::vectorfND rotation_, Geometryf::vectorfND transform);

	~DrawableObjectf();
};

}
