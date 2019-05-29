#include "vectorfND.h"
#include "Linef.h"
#include "Polygonf.h"
#include <iostream>


int main()
{
	Polygonf poly0 = Polygonf({ Pointf({5,2}),Pointf({0,0}),Pointf({10,10})});
Polygonf poly1 = Polygonf({ Linef(),Linef(), Linef()});

	std::cout << poly0.getBorderAt(0).Length() << "\n";
	std::cout << poly0.getBorderAt(1).Length() << "\n";
std::cout << poly0.getBorderAt(2).Length() << "\n";
	return 0;
}
