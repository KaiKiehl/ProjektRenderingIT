#include "Polygonf.h"




Polygonf::Polygonf(std::vector<Pointf> corners_): corners(corners_)
{
}
Polygonf::Polygonf(std::vector<Linef> borders_) : borders(borders_)
{
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
