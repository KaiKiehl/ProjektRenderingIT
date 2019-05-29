#include "Pointf.h"



Pointf::Pointf(vectorfND location_) : location(location_)
{

}

Pointf::Pointf(std::vector<float> v)
{
	for (uint i = 0; i < v.size(); i++)
		location.push_back(v.at(i));
}


Pointf::Pointf()
{
}
