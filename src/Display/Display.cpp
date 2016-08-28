#include "Display.h"

Display::Display()
{
    //ctor
    this->camera_mode = 0;
}

Display::~Display()
{
    //dtor
}

void Display::draw() {

    this->clean();
    this->selectCameraMode(this->camera_mode);
    this->_map.draw();
    this->render();
}


void Display::init() {
    this->initGL();
}


void Display::initGL() {

    SDL_Init(SDL_INIT_VIDEO);
    atexit(SDL_Quit);
    SDL_WM_SetCaption("SDL GL Application", NULL);
    SDL_SetVideoMode(800, 600, 32, SDL_OPENGL);

    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluPerspective(70, (double)800/600, 1, 1000);

	glEnable(GL_DEPTH_TEST);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glHint(GL_PERSPECTIVE_CORRECTION_HINT,GL_NICEST);
	glFrontFace(GL_CW);
	glShadeModel(GL_SMOOTH);

}


void Display::clean() {
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}


void Display::render() {
    glFlush();
    SDL_GL_SwapBuffers();
}


void Display::selectCameraMode(int camMode) {

   switch(camMode) {
        case 0:
            gluLookAt(200,200,200, 0,0,0, 0,0,1);
        break;
        case 1:
            gluLookAt(1,1,900, 0,0,0, 0,0,1);
        break;
        case 2:
            gluLookAt(100,100,100, 0,0,0, 0,0,1);
        break;

        /*
        case 3:
            lang = myMonde.individus[0].angle;
            lx = myMonde.individus[0].x;
            ly = myMonde.individus[0].y;
            gluLookAt(lx,ly,100, 0,0,0, 0,0,1);
        break;
        case 4:
             lang = myMonde.individus[0].angle;
             lx = myMonde.individus[0].x;
             ly = myMonde.individus[0].y;
            gluLookAt(lx,ly,100, lx + 20 * cos(lang / 180 * M_PI), ly + 20 *  sin(lang / 180 * M_PI), 1 , 0,0,1);
        break;
        */

    }
}



void Display::setCameraMode(int camMode) {
    this->camera_mode = camMode;
}


