#include "vectorfND.h"
#include "Linef.h"
#include "Polygonf.h"
#include <iostream>


int main()
{
	Polygonf poly0 = Polygonf(std::vector<Pointf>({ Pointf({5,2}),Pointf({0,0}),Pointf({10,10})}));

	std::cout << poly0.;

	system("pause");
	return 0;
}
