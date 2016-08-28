#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include <SDL/SDL.h>
#include "Display/Display.h"


class UserInterface
{
    public:

        int camera_mode;

        SDL_Event event;
        Display * displayer;

        UserInterface();
        virtual ~UserInterface();

        void checkKeyBoard();
        void check();
        void init();

        void setDisplayer(Display * displayer);

    protected:
    private:
};

#endif // USERINTERFACE_H
