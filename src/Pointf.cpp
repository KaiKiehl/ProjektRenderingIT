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
	vf2d v;
	if (location.size() > 2)
	{
		v.x = location[0];
		v.y = location[1];
	}
	else
		v.x = location[0];

for (uint  i = 2; i < location.size(); i++)
{
	v.x += location[i]/i;
	if (location.size() > 2)
		v.y += location[i]/i;
}
return v;
}

void Geometryf::Pointf::Draw(screen *scrn)
{

	scrn->on(to2D());

}
