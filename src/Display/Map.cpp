#include "Display/Map.h"

using namespace display;

Map::Map()
{
    //ctor
    this->sizeX = 1000;
    this->sizeY = 1000;
    this->stepXY = 20;
}

Map::~Map()
{
    //dtor
}


void Map::draw() {
    this->drawMap();
}


void Map::drawMap() {

    glPushMatrix();
    glTranslated(- this->sizeX / 2, - this->sizeY / 2 , 0);
    glBegin(GL_LINES);
    glColor3ub(100,100,100);

    for (int x=0; x <= this->sizeX; x = x + this->stepXY) {
        glVertex3d(x,0,0);
        glVertex3d(x,this->sizeY,0);
    }

    for (int y=0; y <= this->sizeY; y = y + this->stepXY) {
        glVertex3d(0,y,0);
        glVertex3d(this->sizeX, y,0);
    }

    glEnd();
    glPopMatrix();
}
