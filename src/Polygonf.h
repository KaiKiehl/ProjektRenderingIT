#pragma once
#include "DrawableObjectf.h"
#include "Pointf.h"
#include "Linef.h"
class Polygonf :
	private DrawableObjectf
{/* Dimensionenzahl + 1 Ecken => Punkt-Array*/
public:
	std::vector<Pointf> corners;
	std::vector<Linef> borders;
	Polygonf(std::vector<Pointf> corners_);
	Polygonf(std::vector<Linef> borders_);
	Polygonf(); //creates a 2Dimensional triangle
	~Polygonf();
};

