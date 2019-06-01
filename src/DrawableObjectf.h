
#ifndef DRWBL_O
    #define DRWBL_O
#include "vectorfND.h"
#include "screen.h"
namespace Geometryf
{
 class DrawableObjectf
{

	/*
	Objekt in Welt
	*/

public:
	Geometryf::vectorfND location, rotation, transform;
	DrawableObjectf();

	DrawableObjectf(Geometryf::vectorfND location_, Geometryf::vectorfND rotation_, Geometryf::vectorfND transform);
	void Draw(screen *scrn);
	~DrawableObjectf();
};

}
#endif
