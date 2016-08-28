#ifndef DISPLAY_MAP_H
#define DISPLAY_MAP_H

#include <GL/gl.h>
#include "GraphicElement.h"


namespace display {

    class Map: public GraphicElement
    {
        public:

            Map();
            virtual ~Map();

            double sizeX;
            double sizeY;
            double stepXY;

            void draw();
            void drawMap();

        protected:
        private:
    };
}
#endif // MAP_H
