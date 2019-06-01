#ifndef LNF
    #define LNF
	#include "DrawableObjectf.h"
	#include "Pointf.h"
	#include "res.h"

namespace Geometryf
{
class Linef :
	public DrawableObjectf
{
private:
	Geometryf::Pointf p0, p1;
public:
	Linef();
	Linef(Geometryf::Pointf p0_, Geometryf::Pointf p1_);
	~Linef();
	float Length();
	Geometryf::Pointf Getp0(void);
	void Setp0(Geometryf::Pointf p);
	Geometryf::Pointf Getp1(void);
	void Setp1(Geometryf::Pointf p);
	void Draw(screen *scrn);
};
}
#endif
