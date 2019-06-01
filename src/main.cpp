#include "res.h"
#include "Polytopef.h"
#include "world.h"



void drawToConsole(screen *scrn)
{
	for (uint x = 0; x < scrn->getXsize(); x++)
	{
		for (uint y = 0; y < scrn->getYsize(); y++)
		{
			if (scrn->at(y,x))
				std::cout << "X";
			else
				std::cout << " ";
		}
		std::cout << "\n";
	}
}

int main()
{
	Geometryf::Polytopef poly0 = Geometryf::Polytopef({ Geometryf::Pointf({0,0,0}),Geometryf::Pointf({10,0,0}),Geometryf::Pointf({10,10,0}),Geometryf::Pointf({10,10,10}),Geometryf::Pointf({0,10,0}),Geometryf::Pointf({0,10,10}),Geometryf::Pointf({0,0,10})});
screen scrn = screen(20,20);
world w0 = world(&scrn);
w0.addDrawableObject(&poly0);

Geometryf::Pointf p0 = Geometryf::Pointf({0,5,3});
w0.addDrawableObject(&p0);
poly0.Draw(&scrn);
drawToConsole(&scrn);

return 0;
}
