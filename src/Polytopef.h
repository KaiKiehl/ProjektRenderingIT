#ifndef PLYTPF
    #define PLYTPF
	#include "DrawableObjectf.h"
	#include "Pointf.h"
	#include "Linef.h"
namespace Geometryf
{
class Polytopef :
	public DrawableObjectf
{/* Dimensionenzahl + 1 Ecken => Punkt-Array*/
public:
	std::vector<Geometryf::Pointf> corners;
	std::vector<Geometryf::Linef> borders;
	Polytopef(std::vector<Geometryf::Pointf> corners_);
	Polytopef(); //creates a 2Dimensional triangle
	~Polytopef();
	Geometryf::Linef getLongestBorder(void);
	Geometryf::Linef getShortestBorder(void);
	Geometryf::Linef getBorderAt(uint i);
	uint getBorderCount();
	std::string getVolume(void);
	void Draw(screen *scrn);
};
}
#endif
