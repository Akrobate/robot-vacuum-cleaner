#ifndef DISPLAY_H
#define DISPLAY_H

#include <SDL/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include "Display/Map.h"

using namespace display;

class Display
{
    public:

        int camera_mode;

        Display();
        virtual ~Display();
        void initGL();
        void init();
        void draw();
        void setCameraMode(int camMode);
        void selectCameraMode(int camMode);


    protected:

    private:
        Map _map;
        void clean();
        void render();

};

#endif // DISPLAY_H
