#include "Pointf.h"



Geometryf::Pointf::Pointf(Geometryf::vectorfND location_) : location(location_)
{

}

Geometryf::Pointf::Pointf(std::vector<float> v)
{
	for (uint i = 0; i < v.size(); i++)
		location.push_back(v.at(i));
}


Geometryf::Pointf::Pointf()
{
}
