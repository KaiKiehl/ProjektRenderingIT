#include "screen.h"

screen::screen(uint xsize,uint ysize)
{
    scrn.reserve(xsize);
    for (uint i = 0; i < xsize; i++)
    {
        scrn[i].reserve(ysize);
        for (uint j = 0; j < ysize; j++)
        {
            scrn[i][j] = false;
        }
    }

}

screen::~screen()
{
}
void screen::on(Geometryf::vf2d v)
{
    scrn[v.x][v.y] = true;
}
void screen::on(const float x, const float y)
{
    scrn[x][y] = true;
}
void screen::off(Geometryf::vf2d v)
{
    scrn[v.x][v.y] = false;
}
void screen::off(const float x, const float y)
{
    scrn[x][y] = false;
}
