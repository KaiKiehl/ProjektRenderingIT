#ifndef SCRN
    #define SCRN
#include "res.h"






class screen
{
private:
    std::vector<std::vector<bool>> scrn;
public:
    screen(uint xsize,uint ysize);
    void on(Geometryf::vf2d v);
    void off(Geometryf::vf2d v);
    void on(const float x, const float y);
    void off(const float x, const float y);
    ~screen();
};

#endif
