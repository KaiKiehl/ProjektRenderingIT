#include "world.h"


world::world(screen *scrn_)
{
    scrn = scrn_;
}

world::~world()
{
}

int world::addDrawableObject(Geometryf::DrawableObjectf *o)
{
    objects.push_back(o);
    return objects.size()-1;
}
void world::draw(void)
{
    for (uint i = 0; i < objects.size(); i++)
    {
        objects[i]->Draw(scrn);
    }
}
