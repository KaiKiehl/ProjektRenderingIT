#pragma once
#include "DrawableObjectf.h"


class Pointf :
	private DrawableObjectf
{
public:
	vectorfND location;
	Pointf(vectorfND location_);
	Pointf(std::vector<float> v);
	Pointf();

};

