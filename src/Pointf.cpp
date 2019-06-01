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

Geometryf::vf2d Geometryf::Pointf::to2D(void)
{
	float pos2d[2];
	if (location.size() > 2)
		float pos2d[2] = {location[0], location[1]};
	else
		float pos2d[1] = {location[0]};

for (uint  i = 2; i < location.size(); i++)
{
	pos2d[0] = pos2d[0]+location[i]/i;
	if (location.size() > 2)
		pos2d[1] = pos2d[0]+location[i]/i;
}
}

void Geometryf::Pointf::Draw(screen *scrn)
{

	scrn->on(to2D());

}
