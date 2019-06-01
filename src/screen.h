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
    void on(float x,float y);
    void off(float x,float y);
    int getXsize(void);
    int getYsize(void);
    ~screen();
    bool at(int x,int y);
};

#endif
