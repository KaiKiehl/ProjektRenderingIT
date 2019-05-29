#pragma once
#include "DrawableObjectf.h"

namespace Geometryf
{
class Pointf :
	private DrawableObjectf
{
public:
	Geometryf::vectorfND location;
	Pointf(Geometryf::vectorfND location_);
	Pointf(std::vector<float> v);
	Pointf();

};
}
