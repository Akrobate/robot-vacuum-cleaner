#ifndef GRAPHICALELEMENTINTERFACE_H
#define GRAPHICALELEMENTINTERFACE_H


class GraphicalElementInterface
{
    public:

        double x;
        double y;
        double z;

        double scale;

        double angle_x;
        double angle_y;
        double angle_z;


        virtual double getX() = 0;
        virtual double getY() = 0;
        virtual double getZ() = 0;
        virtual double getScale() = 0;
        virtual double getAngleX() = 0;
        virtual double getAngleY() = 0;
        virtual double getAngleZ() = 0;


        virtual void setX(double x) = 0;
        virtual void setY(double y) = 0;
        virtual void setZ(double z) = 0;
        virtual void setScale(double scale) = 0;
        virtual void setAngleX(double angle_x) = 0;
        virtual void setAngleY(double angle_y) = 0;
        virtual void setAngleZ(double angle_z) = 0;


    protected:

    private:
};

#endif // GRAPHICALELEMENTINTERFACE_H
