#ifndef APPLICATION_H
#define APPLICATION_H

#include <stdio.h>
#include <SDL/SDL.h>

#include "Display/Display.h"
#include "UserInterface.h"

#include "UniverseLogic/Universe.h"

class Application
{
    public:

        bool debug;
        bool display;
        Uint32 timer_start_ms;
        Uint32 timer_loop_duration;

        Display displayer;
        UserInterface ui;

        Application();
        virtual ~Application();

        void test();
        void run();
        void init();
        void log(char * message);
        void setLoopDuration(int duration_ms);
        int getLoopDuration();
        void startTimer();
        int getTimerDuration();

    protected:
    private:
};

#endif // APPLICATION_H
