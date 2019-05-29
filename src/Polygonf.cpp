#include "Polygonf.h"




Polygonf::Polygonf(std::vector<Pointf> corners_): corners(corners_)
{
	for(uint i = 0; i < corners.size(); i++)
	{
		borders.push_back(Linef(corners.at(i),corners.at(i+1)));
	}
}
Polygonf::Polygonf(std::vector<Linef> borders_) : borders(borders_)
{
	for(uint i = 0; i < borders.size(); i++)
	{
		corners.push_back(borders.at(i).Getp0());
	}
}
Polygonf::Polygonf()
{
	corners.push_back(Pointf());
	corners.push_back(Pointf());
	corners.push_back(Pointf());

}


Polygonf::~Polygonf()
{
}
