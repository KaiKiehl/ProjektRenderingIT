#pragma once
#include <vector>
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
