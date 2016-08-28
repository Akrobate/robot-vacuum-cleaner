#include "Application.h"

Application::Application()
{
    //ctor
    this->debug = true;
    this->display = true;


    if (this->debug) {
        printf("Application created!!!\n");
    }


}


void Application::init()
{
    if (this->debug) {
        printf("In init method\n");
    }

    this->startTimer();
    this->setLoopDuration(0);

    if (this->display) {
        this->displayer.init();
        this->ui.init();
        this->ui.setDisplayer(&this->displayer);
    }
}


void Application::run()
{
    this->log("In main loop\n");

    while (1) {

        // User Interface events check
        ui.check();
        this->startTimer();

        // Render the scene
        this->displayer.draw();


        printf("Loop duration: %d \n", this->getLoopDuration());
        SDL_Delay(20);

        this->setLoopDuration(this->getTimerDuration());
       // break;
    }

}


void Application::startTimer()
{
    this->timer_start_ms = SDL_GetTicks();
}


int Application::getTimerDuration()
{
    Uint32 current_ticks = SDL_GetTicks();
    return (SDL_GetTicks() - this->timer_start_ms);
}


int Application::getLoopDuration()
{
    return this->timer_loop_duration;
}


void Application::setLoopDuration(int duration_ms)
{
    this->timer_loop_duration = duration_ms;
}


void Application::log(char * message) {
    if (this->debug) {
        printf("%s\n", message);
    }
}


Application::~Application()
{
    //dtor
}


void Application::test()
{
    if (this->debug) {
        printf("in test method\n");
    }
}
