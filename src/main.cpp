#include "vectorfND.h"
#include "Linef.h"
#include "Polygonf.h"
#include <iostream>


int main()
{
	Geometryf::Polygonf poly0 = Geometryf::Polygonf({ Geometryf::Pointf({5,2}),Geometryf::Pointf({0,0}),Geometryf::Pointf({10,10})});
	Geometryf::Polygonf poly1 = Geometryf::Polygonf({ Geometryf::Linef(),Geometryf::Linef(), Geometryf::Linef()});

	std::cout << poly0.getBorderAt(0).Length() << "\n";
	std::cout << poly0.getBorderAt(1).Length() << "\n";
std::cout << poly0.getBorderAt(2).Length() << "\n";
	return 0;
}
