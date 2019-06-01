#include "Polytopef.h"




Geometryf::Polytopef::Polytopef(std::vector<Geometryf::Pointf> corners_): corners(corners_) //Each corner needs N connections (when N is it's dimensionality)
{

	for(uint i = 0; i < corners.size()-1; i++)
	{
		borders.push_back(Linef(corners.at(i),corners.at(i+1)));
	}
	borders.push_back(Linef(corners.at(corners.size()-1),corners.at(0)));
}

Geometryf::Polytopef::Polytopef()
{
	corners.push_back(Pointf());
	corners.push_back(Pointf());
	corners.push_back(Pointf());

}


Geometryf::Polytopef::~Polytopef()
{
}
Geometryf::Linef Geometryf::Polytopef::getLongestBorder(void)
	{
		Linef lBorder = borders.at(0);
		for(uint i = 1; i < borders.size(); i++)
		{
			if (borders.at(i).Length() > lBorder.Length())
				lBorder = borders.at(i);
		}
		return lBorder;
	}
Geometryf::Linef Geometryf::Polytopef::getShortestBorder(void)
	{
		Linef lBorder = borders.at(0);
		for(uint i = 1; i < borders.size(); i++)
		{
			if (borders.at(i).Length() < lBorder.Length())
				lBorder = borders.at(i);
		}
		return lBorder;
	}
Geometryf::Linef Geometryf::Polytopef::getBorderAt(uint i)
{
	return borders.at(i);
}
uint Geometryf::Polytopef::getBorderCount(void)
{
	return borders.size();
}
std::string Geometryf::Polytopef::getVolume(void)
{
	std::string str = " LE^("+std::to_string(corners.at(0).location.size())+")";
	return str;
}
void Geometryf::Polytopef::Draw(screen *scrn)
{

	for (uint i = 0; i < borders.size(); i++)
	{
	scrn->on(borders[i].Getp0().to2D());
	scrn->on(borders[i].Getp1().to2D());
	borders[i].Draw(scrn);
	}

}
