#include "UserInterface.h"

UserInterface::UserInterface()
{
    //ctor

}

UserInterface::~UserInterface()
{
    //dtor
}


void UserInterface::init()
{
    this->camera_mode = 0;
}


void UserInterface::setDisplayer(Display * displayer)
{
    this->displayer = displayer;
}


void UserInterface::check()
{
    this->checkKeyBoard();
    this->displayer->setCameraMode(this->camera_mode);
}


void UserInterface::checkKeyBoard() {

    while (SDL_PollEvent(&event)) {
            switch(event.type) {
                case SDL_KEYDOWN:
                   switch(event.key.keysym.sym){
                        case SDLK_LEFT:

                        break;
                        case SDLK_RIGHT:

                        break;
                        case SDLK_UP:
                            if (this->camera_mode < 3) {
                                this->camera_mode++;
                            } else {
                                this->camera_mode = 0;
                            }
                        break;
                        case SDLK_DOWN:

                        break;
                    }

                break;
                case SDL_KEYUP:
                break;
                case SDL_QUIT:
                    exit(0);
                break;
                }
            }
        }
