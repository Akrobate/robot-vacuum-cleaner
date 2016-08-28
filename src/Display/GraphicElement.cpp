#include "Display/GraphicElement.h"

GraphicElement::GraphicElement()
{
    //ctor
}


GraphicElement::~GraphicElement()
{
    //dtor
}


// Getters
double GraphicElement::getX()
{
    return this->x;
}


double GraphicElement::getY()
{
    return this->y;
}


double GraphicElement::getZ()
{
    return this->z;
}


double GraphicElement::getScale()
{
    return this->scale;
}


double GraphicElement::getAngleX()
{
    return this->angle_x;
}


double GraphicElement::getAngleY()
{
    return this->angle_y;
}


double GraphicElement::getAngleZ()
{
    return this->angle_z;
}

// Setters

void GraphicElement::setX(double x)
{
    this->x = x;
}


void GraphicElement::setY(double y)
{
    this->y = y;
}


void GraphicElement::setZ(double x)
{
    this->z = z;
}


void GraphicElement::setScale(double scale)
{
    this->scale = scale;
}


void GraphicElement::setAngleX(double angle_x)
{
    this->angle_x = angle_x;
}


void GraphicElement::setAngleY(double angle_y)
{
    this->angle_y = angle_y;
}


void GraphicElement::setAngleZ(double angle_z)
{
    this->angle_z = angle_z;
}

