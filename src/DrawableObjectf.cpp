#include "DrawableObjectf.h"



DrawableObjectf::DrawableObjectf(): location(),rotation(),transform()
{
}


DrawableObjectf::DrawableObjectf(vectorfND location_, vectorfND rotation_, vectorfND transform_): location(location_), rotation(rotation_), transform(transform_)
{

}

DrawableObjectf::~DrawableObjectf()
{
}
