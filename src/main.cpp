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
				std::cout << "+";
			else
				std::cout << "#";
		}
		std::cout << "\n";
	}
}

int main()
{


screen scrn = screen(40,40);
world w0 = world(&scrn);


Geometryf::Polytopef poly0 = Geometryf::Polytopef({Geometryf::Pointf({5,0,0,0}),Geometryf::Pointf({15,0,0,0}),Geometryf::Pointf({5,10,0,0}),Geometryf::Pointf({5,10,-10,0}),Geometryf::Pointf({5,0,0,0}),Geometryf::Pointf({5,10,0,0}),Geometryf::Pointf({5,10,-10,0})});

{
	using namespace Geometryf;
	Linef({Pointf({10,0,0,0}),Pointf({20,0,0,0})}).Draw(&scrn);
	Linef({Pointf({20,0,0,0}),Pointf({20,10,0,0})}).Draw(&scrn);
	Linef({Pointf({10,10,0,0}),Pointf({20,10,0,0})}).Draw(&scrn);
	Linef({Pointf({10,0,0,0}),Pointf({10,10,0,0})}).Draw(&scrn);
	Linef({Pointf({10,0,0,0}),Pointf({10,0,10,0})}).Draw(&scrn);
	Linef({Pointf({20,0,0,0}),Pointf({20,0,10,0})}).Draw(&scrn);
	Linef({Pointf({10,10,0,0}),Pointf({10,10,10,0})}).Draw(&scrn);
	Linef({Pointf({20,10,0,0}),Pointf({20,10,10,0})}).Draw(&scrn);
	Linef({Pointf({10,0,10,0}),Pointf({20,0,10,0})}).Draw(&scrn);
	Linef({Pointf({10,0,10,0}),Pointf({10,10,10,0})}).Draw(&scrn);
	Linef({Pointf({10,10,10,0}),Pointf({20,10,10,0})}).Draw(&scrn);
	Linef({Pointf({20,0,10,0}),Pointf({20,10,10,0})}).Draw(&scrn);
}





w0.addDrawableObject(&poly0);

Geometryf::Pointf p0 = Geometryf::Pointf({0,5,3});
w0.addDrawableObject(&p0);
//poly0.Draw(&scrn);
drawToConsole(&scrn);

return 0;
}
