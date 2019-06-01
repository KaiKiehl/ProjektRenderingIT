
#include "DrawableObjectf.h"
#include "screen.h"
#include "res.h"


class world
{
private:
    /* data */
    screen *scrn;
    std::vector<Geometryf::DrawableObjectf*> objects;
public:
    world(screen *scrn);
    int addDrawableObject(Geometryf::DrawableObjectf *o);
    void draw();
    ~world();
};
