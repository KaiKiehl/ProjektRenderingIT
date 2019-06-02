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
				std::cout << " ";
		}
		std::cout << "\n";
	}
}

int main()
{


screen scrn = screen(30,150);
world w0 = world(&scrn);


//Geometryf::Polytopef poly0 = Geometryf::Polytopef({Geometryf::Pointf({5,0,0,0}),Geometryf::Pointf({15,0,0,0}),Geometryf::Pointf({5,10,0,0}),Geometryf::Pointf({5,10,-10,0}),Geometryf::Pointf({5,0,0,0}),Geometryf::Pointf({5,10,0,0}),Geometryf::Pointf({5,10,-10,0})});

{
	using namespace Geometryf;
	Pointf p0 =Pointf({5,5,-5,0});
	Pointf p1 =Pointf({15,5,-5,0});
	Pointf p2 =Pointf({15,15,-5,0});
	Pointf p3 =Pointf({5,15,-5,0});
	Pointf p4 =Pointf({5,5,5,0});
	Pointf p5 =Pointf({15,5,5,0});
	Pointf p6 =Pointf({15,15,5,0});
	Pointf p7 =Pointf({5,15,5,0});
Polytopef pltp1= Polytopef({p0,p4,p5,p0,p3,p7,p6,p5,p4,p7,p5,p6});
pltp1.Draw(&scrn);
}





//w0.addDrawableObject(&poly0);

Geometryf::Pointf p0 = Geometryf::Pointf({0,5,3});
w0.addDrawableObject(&p0);
//poly0.Draw(&scrn);
drawToConsole(&scrn);

return 0;
}
