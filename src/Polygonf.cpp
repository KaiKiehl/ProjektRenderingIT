#include "Polygonf.h"




Geometryf::Polygonf::Polygonf(std::vector<Pointf> corners_): corners(corners_)
{
	for(uint i = 0; i < corners.size()-1; i++)
	{
		borders.push_back(Linef(corners.at(i),corners.at(i+1)));
	}
	borders.push_back(Linef(corners.at(corners.size()-1),corners.at(0)));
}
Geometryf::Polygonf::Polygonf(std::vector<Linef> borders_) : borders(borders_)
{
	for(uint i = 0; i < borders.size(); i++)
	{
		corners.push_back(borders.at(i).Getp0());
	}
}
Geometryf::Polygonf::Polygonf()
{
	corners.push_back(Pointf());
	corners.push_back(Pointf());
	corners.push_back(Pointf());

}


Geometryf::Polygonf::~Polygonf()
{
}
Geometryf::Linef Geometryf::Polygonf::getLongestBorder(void)
	{
		Linef lBorder = borders.at(0);
		for(uint i = 1; i < borders.size(); i++)
		{
			if (borders.at(i).Length() > lBorder.Length())
				lBorder = borders.at(i);
		}
		return lBorder;
	}
Geometryf::Linef Geometryf::Polygonf::getShortestBorder(void)
	{
		Linef lBorder = borders.at(0);
		for(uint i = 1; i < borders.size(); i++)
		{
			if (borders.at(i).Length() < lBorder.Length())
				lBorder = borders.at(i);
		}
		return lBorder;
	}
Geometryf::Linef Geometryf::Polygonf::getBorderAt(uint i)
{
	return borders.at(i);
}
