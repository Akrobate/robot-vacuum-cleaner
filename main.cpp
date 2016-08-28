#include <stdio.h>
#include "include/Application.h"
#define M_PI  3.14159265358979323846

using namespace std;

/**
 *  Main application declaration
 *
 *  usefull trics: lmingw32 -lSDLmain -lSDL
 *  usefull trics: http://loka.developpez.com/tutoriel/sdl/installation/codeblocks/
 */

Application RVCApplication;

int main(int argc, char *argv[]) {
    RVCApplication.init();
    RVCApplication.run();
}
