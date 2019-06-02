#include "screen.h"

screen::screen(uint xsize,uint ysize)
{
    scrn.reserve(xsize);
    std::vector<bool> row;
    for (uint i = 0; i < xsize; i++)
    {
        for (uint j = 0; j < ysize; j++)
        {
            row.push_back(false);
        }
        scrn.push_back(row);
        row.clear();
    }

}
screen::~screen()
{

}
void screen::on(Geometryf::vf2d v)
{
     if (v.x < getXsize()&&v.y< getYsize()&&v.x >0&&v.y>=0)
        scrn[v.x][v.y] = true;
}
void screen::on(float x, float y)
{
    if (x < getXsize()&&y< getYsize()&&x >0&&y>=0)
        scrn[x][y] = true;
}
void screen::off(Geometryf::vf2d v)
{
     if (v.x < getXsize()&&v.y< getYsize()&&v.x >0&&v.y>=0)
        scrn[v.x][v.y] = false;
}
void screen::off(float x, float y)
{
     if (x < getXsize()&&y< getYsize()&&x >0&&y>=0)
        scrn[x][y] = false;
}
int screen::getXsize(void)
{
    return scrn.size();
}
int screen::getYsize(void)
{
    return scrn[0].size();
}
bool screen::at(int x,int y)
{
    if (x < getXsize()&&y< getYsize()&&x >0&&y>=0)
        return scrn[x][y];
    else return false;
}
