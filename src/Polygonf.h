#pragma once
#include "DrawableObjectf.h"
#include "Pointf.h"
#include "Linef.h"
namespace Geometryf
{
class Polygonf :
	private DrawableObjectf
{/* Dimensionenzahl + 1 Ecken => Punkt-Array*/
public:
	std::vector<Geometryf::Pointf> corners;
	std::vector<Geometryf::Linef> borders;
	Polygonf(std::vector<Geometryf::Pointf> corners_);
	Polygonf(std::vector<Geometryf::Linef> borders_);
	Polygonf(); //creates a 2Dimensional triangle
	~Polygonf();
	Geometryf::Linef getLongestBorder(void);
	Geometryf::Linef getShortestBorder(void);
	Geometryf::Linef getBorderAt(uint i);
};
}
