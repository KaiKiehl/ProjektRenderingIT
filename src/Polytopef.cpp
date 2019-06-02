#include "Polytopef.h"
#include <algorithm>



Geometryf::Polytopef::Polytopef(std::vector<Geometryf::Pointf> corners_): corners(corners_) //Each corner needs N connections (when N is it's dimensionality)
{//für jede Dimesion benötigt ein Punkt eine Verbindung. Es wird von einem Punkt ausgegangen, dann die Punkte aufgezählt, die mit diesem verbunden werden, dann die Punkte, die mit diesen verbunden werden
	if (!corners.empty())
	{

		for (uint i = 0; i < corners.size()-1; i++)
		{
			borders.push_back(Linef({corners[i], corners[i+1]}));
		}
		borders.push_back(Linef(corners[0], corners.at(corners.size()-1)));

		/*float dimensionality =corners[0].location.size();

		if (dimensionality< corners.size()){// ein N-Dimensionales Objekt hat mindestens N+1 Ecken
			for(uint k = 1; k < corners.size();k *= dimensionality){

				for(uint i = k-1; i < k+dimensionality-2; i++)
					for(uint j = 1; j < dimensionality; j++)
					{
						//if(!(std::find(borders.begin(), borders.end(), Linef{corners[i],corners[i+j]}) != borders.end()&&std::find(borders.begin(), borders.end(), Linef{corners[i+j],corners[i]}) != borders.end()))
							borders.push_back(Linef{corners[i+k-1],corners[i+j+k-1]});
					}

					//connect p1,p2,...pN-1,pN to each N-1 other points, but only if no connection exists already
				//do this again with each  of the new points. Repeat until finished.
			}

			for(uint i = 0; i < corners.size()-1; i++)
			{
				borders.push_back(Linef(corners.at(i),corners.at(i+1)));
			}
			borders.push_back(Linef(corners.at(corners.size()-1),corners.at(0)));
			}
		else
		{
			std::cout << "Incomplete polytope (not enough corners for its dimensionality)";
		}*/

	}
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
