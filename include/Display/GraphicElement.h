#ifndef GRAPHICELEMENT_H
#define GRAPHICELEMENT_H

#include "GraphicalElementInterface.h"

class GraphicElement: public GraphicalElementInterface
{
    public:

        double x;
        double y;
        double z;
        double scale;
        double angle_x;
        double angle_y;
        double angle_z;

        double getX();
        double getY();
        double getZ();
        double getScale();
        double getAngleX();
        double getAngleY();
        double getAngleZ();

        GraphicElement();
        virtual ~GraphicElement();

        void setX(double x);
        void setY(double y);
        void setZ(double z);
        void setScale(double scale);
        void setAngleX(double angle_x);
        void setAngleY(double angle_y);
        void setAngleZ(double angle_z);

    protected:
    private:
};

#endif // GRAPHICELEMENT_H
