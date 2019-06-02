#include "Linef.h"


Geometryf::Linef::Linef()
{
}

Geometryf::Linef::Linef(Geometryf::Pointf p0_, Geometryf::Pointf p1_) : p0(p0_), p1(p1_)
{
}


Geometryf::Linef::~Linef()
{
}

float Geometryf::Linef::Length()
{
	Geometryf::vectorfND deltaDim = p0.location - p1.location;
	deltaDim = deltaDim.abs();

	return deltaDim.mag();
}


	Geometryf::Pointf Geometryf::Linef::Getp0(void)
	{
		Geometryf::Pointf p0_ = p0;
		return p0_;
	}
	void Geometryf::Linef::Setp0(Pointf p)
	{
		p0 = p;
	}
	Geometryf::Pointf Geometryf::Linef::Getp1(void)
	{
	Geometryf::Pointf p1_ = p1;
		return p1_;
	}
	void Geometryf::Linef::Setp1(Pointf p)
	{
		p1 = p;
	}
void Geometryf::Linef::Draw(screen *scrn)
{
  if (Linef::Length())
  {


	float x1 = p0.to2D().x, x2 = p1.to2D().x, y1 = p0.to2D().y, y2 = p1.to2D().y;
        // Bresenham's line algorithm
  bool steep = ((y2 - y1) > fabs(x2 - x1));
  if(steep)
  {
    std::swap(x1, y1);
    std::swap(x2, y2);
  }

  if(x1 > x2)
  {
    std::swap(x1, x2);
    std::swap(y1, y2);
  }

  float dx = x2 - x1;
  float dy = fabs(y2 - y1);

  float error = dx / 2.0f;
  int ystep = (y1 < y2) ? 1 : -1;
  int y = (int)y1;

  int maxX = (int)x2;

  for(int x=(int)x1; x<maxX; x++)
  {
    if(steep)
    {
        scrn->on(y,x);
    }
    else
    {
        scrn->on(x,y);
    }

    error -= dy;
    if(error < 0)
    {
        y += ystep;
        error += dx;
    }
  }}
}
