#ifndef PNTF
    #define PNTF
	#include "DrawableObjectf.h"
	#include "screen.h"
	#include "res.h"
namespace Geometryf
{
class Pointf :
	private DrawableObjectf
{
private:


public:

	Geometryf::vectorfND location;
	Pointf(Geometryf::vectorfND location_);
	Pointf(std::vector<float> v);
	Pointf();
	Geometryf::vf2d to2D(void);
	void Draw(screen *scrn);
};
}
#endif
