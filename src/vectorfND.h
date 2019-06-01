#ifndef VFND
    #define VFND
#include "res.h"
namespace Geometryf
{
	class vectorfND :
	public std::vector<float>
{
public:
	vectorfND(std::vector<float> v);
	vectorfND();
	float mag();

	void print();
	Geometryf::vectorfND operator+(vectorfND&);
	Geometryf::vectorfND operator-(vectorfND&);
	Geometryf::vectorfND abs();
};

} // namespace Geometry
#endif
