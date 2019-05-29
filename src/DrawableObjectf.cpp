#include "DrawableObjectf.h"



Geometryf::DrawableObjectf::DrawableObjectf(): location(),rotation(),transform()
{
}


Geometryf::DrawableObjectf::DrawableObjectf(Geometryf::vectorfND location_, Geometryf::vectorfND rotation_, Geometryf::vectorfND transform_): location(location_), rotation(rotation_), transform(transform_)
{

}

Geometryf::DrawableObjectf::~DrawableObjectf()
{
}
